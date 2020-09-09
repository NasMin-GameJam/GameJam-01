using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;
using TMPro;
using UnityEngine.UI;

namespace moi.photonLobby
{
    // We use MonoBehaviourPunCallbacks and also ILobbyCallbacks for custom matchmaking
    public class Photon_LobbyCustomMatchMaking : MonoBehaviourPunCallbacks, ILobbyCallbacks
    {
        public GameObject lobbyCanvas;

        [Header("Room Options")]
        public TMP_InputField roomName;
        public Toggle isPublic;
        public TMP_InputField maxPlayer;
        int maxNum = 2;

        [Header("Rooms")]
        public string roomName_String;
        public int roomSize_Int;
        public GameObject roomListingPrefab;
        public Transform roomsPanel;

        public List<RoomInfo> roomListings;

        [Header("Connected Room Panel")]
        public GameObject JoinedRoomPanel;
        public TextMeshProUGUI CreateOrJoinedText;

        [Header("Current Room Info")]
        public string curRoomName;
        public int curPlayerSize;
        public int maxPlayerSize;

        void Start()
        {
            roomListings = new List<RoomInfo>();
        }

        public void CreateRoom()
        {
            validateRoomOptions();

            RoomOptions roomOps = new RoomOptions()
            {
                IsOpen = isPublic,
                IsVisible = true,
                MaxPlayers = (byte)roomSize_Int
            };

            PhotonNetwork.CreateRoom(roomName_String, roomOps, TypedLobby.Default);
        }

        public override void OnCreatedRoom()
        {
            Photon_Manager.LogMessage("Created room");
            lobbyCanvas.SetActive(false);
        }

        void validateRoomOptions()
        {
            maxNum = int.Parse(maxPlayer.text);
            if (maxNum > 10)
            {
                maxNum = 10;
                maxPlayer.text = "10";
            }
            else if (maxNum < 0)
            {
                maxNum = 0;
                maxPlayer.text = "0";
            }

            roomName_String = roomName.text;
            roomSize_Int = maxNum;

            if (string.IsNullOrEmpty(roomName_String))
            {
                Photon_Manager.LogMessage("Room name is empty");
                return;
            }
        }

        public override void OnCreateRoomFailed(short returnCode, string message)
        {
            Photon_Manager.LogMessage("Tried to create new but failed");
            Photon_Manager.LogMessage(message);
        }

        // Leave room properly
        public void OnCancelButtonClicked()
        {
            PhotonNetwork.LeaveRoom();
        }

        // Debugging
        [Header("Debugging")]
        public Photon_RoomCustomMatch roomInfo;

        public override void OnJoinedRoom()
        {
            lobbyCanvas.SetActive(false);

            Photon_Manager.LogMessage("Joined Room. Room Name : " + roomName.text);

            if (string.IsNullOrEmpty(roomName_String))
            {
                roomName_String = PhotonNetwork.CurrentRoom.Name;
            }

            JoinedRoomPanel.SetActive(true);
            CreateOrJoinedText.SetText("You joined room \n Room name is : " + roomName_String);

            if (PhotonNetwork.IsMasterClient)
            {
                CreateOrJoinedText.SetText("You created a room. \n Room name is : " + roomName_String);
            }

            roomInfo.RoomInfos();
        }

        #region Update Room
        // Check if rooms are updated. This is done automatically from Photon side
        // All we need to is to make sure that we are in lobby
        public override void OnRoomListUpdate(List<RoomInfo> roomList)
        {
            //RemoveRoomListings();
            int tempIndex;
            foreach (RoomInfo room in roomList)
            {
                if(roomListings != null)
                {
                    tempIndex = roomListings.FindIndex(ByName(room.Name));
                }
                else
                {
                    tempIndex = -1;
                }

                if(tempIndex != -1)
                {
                    roomListings.RemoveAt(tempIndex);
                    Destroy(roomsPanel.GetChild(tempIndex).gameObject);
                }
                else
                {
                    roomListings.Add(room);
                    ListRoom(room);
                }
            }
        }

        static System.Predicate<RoomInfo> ByName(string name)
        {
            return delegate (RoomInfo room)
            {
                return room.Name == name;
            };
        }

        // Remove all the room. While the childcount is 0, continue destroy until not 0
        void RemoveRoomListings()
        {
            int i = 0;
            while(roomsPanel.childCount != 0)
            {
                Destroy(roomsPanel.GetChild(i).gameObject);
                i++;
            }
        }

        void ListRoom(RoomInfo room)
        {
            if(room.IsOpen && room.IsVisible)
            {
                GameObject tempListing = Instantiate(roomListingPrefab, roomsPanel);
                Photon_RoomButton tempButton = tempListing.GetComponent<Photon_RoomButton>();
                tempButton.roomName = room.Name;
                tempButton.roomSize = room.MaxPlayers;
                tempButton.SetRoom();
            }
        }

        public void OnNameChanged(string nameIn)
        {
            roomName_String = nameIn;
        }

        public void OnRoomSizeChanged(string sizeIn)
        {
            roomSize_Int = int.Parse(sizeIn);
        }

        public void OnClick_JoinLobby()
        {
            if (!PhotonNetwork.InLobby)
            {
                PhotonNetwork.JoinLobby();
            }
        }
        #endregion

    }
}