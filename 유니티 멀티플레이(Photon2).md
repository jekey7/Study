#  유니티 멀티플레이(Photon2)

플레이어 프리팹 -> 컴포넌트 추가 : Photon View, Photon Rigidbody View -> 플레이어 동기화 스크립트 추가

**NetWorkManager 스크립트**

```c#
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;
using Photon.Realtime;

public class NetworkManager : MonoBehaviourPunCallbacks
{
    public InputField NickNameInput;
    public GameObject DisConnectPanel;
    public GameObject RespawnPanel;

    private void Awake()
    {
        Screen.SetResolution(960, 540, false);
        PhotonNetwork.SendRate = 60;
        PhotonNetwork.SerializationRate = 30;
    }

    public void Connect()
    {
        PhotonNetwork.ConnectUsingSettings();
    }

    public override void OnConnectedToMaster()
    {
        PhotonNetwork.LocalPlayer.NickName = NickNameInput.text;
        PhotonNetwork.JoinOrCreateRoom("Room", new RoomOptions { MaxPlayers = 6 }, null);
    }

    public override void OnJoinedRoom()
    {
        DisConnectPanel.SetActive(false);
        Spawn();
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Escape) && PhotonNetwork.IsConnected) PhotonNetwork.Disconnect();
    }

    public void Spawn()
    {
        PhotonNetwork.Instantiate("Player", Vector3.zero, Quaternion.identity);
        RespawnPanel.SetActive(false);
    }

    public override void OnDisconnected(DisconnectCause cause)
    {
        DisConnectPanel.SetActive(true);
        RespawnPanel.SetActive(false);
    }
}

```

**플레이어 동기화 스크립트**

```c#
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;
using Photon.Realtime;

public class PlayerSynchronization : MonoBehaviourPunCallbacks, IPunObservable
{
    private Rigidbody rigid;
    private PhotonView Pv;
    public TextMesh NickNameText;

    bool isGround;
    Vector3 curPos;

    private void Awake()
    {
        rigid = gameObject.GetComponent<Rigidbody>();
        Pv = gameObject.GetComponent<PhotonView>();
        NickNameText.text = Pv.IsMine ? PhotonNetwork.NickName : Pv.Owner.NickName;
        NickNameText.color = Pv.IsMine ? Color.green : Color.red;
    }

    public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
    {
        
    }
}

```

플레이어 컨트롤(PhotonView.IsMine 필수)

```c#
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;

public class PlayerControl : MonoBehaviourPunCallbacks
{
    private  Rigidbody playerRigidbody;
    public Camera fpsCam;
    public static bool GameStarted = false;
    [SerializeField] private float MoveSpeed = 5f;
    [SerializeField] private float rotSpeed = 3f;
    private float currentRot = 0;
    private PhotonView Pv;

    private void Start()
    {
        Pv = gameObject.GetComponent<PhotonView>();
        playerRigidbody = gameObject.GetComponent<Rigidbody>();
        Cursor.lockState = CursorLockMode.Locked;
    }
    
    private void Update()
    {
        if (Pv.IsMine)
        {
            PlayerMove();
            RotCtrl();
        }
    }

    void PlayerMove()
    {
        float xInput = Input.GetAxis("Horizontal");
        float zInput = Input.GetAxis("Vertical");

        float xSpeed = xInput * MoveSpeed;
        float zSpeed = zInput * MoveSpeed;

        transform.Translate(Vector3.forward * zSpeed * Time.deltaTime);
        transform.Translate(Vector3.right * xSpeed * Time.deltaTime);
    }

    void RotCtrl()
    {
        float rotX = Input.GetAxis("Mouse Y") * rotSpeed;
        float rotY = Input.GetAxis("Mouse X") * rotSpeed;
        
        currentRot -= rotX;
        currentRot = Mathf.Clamp(currentRot, -80f, 80f);
        
        this.transform.localRotation *= Quaternion.Euler(0, rotY, 0);

        fpsCam.transform.localEulerAngles = new Vector3(currentRot, 0f, 0f);
    }
}
```

