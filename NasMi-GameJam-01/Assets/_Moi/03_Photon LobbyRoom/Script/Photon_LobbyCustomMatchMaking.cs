﻿using System.Collections;
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
        int maxNum;

        [Header("Rooms")]
        public string roomName_String;
        public int roomSize_Int;
        public GameObject roomListingPrefab;
        public Transform roomsPanel;

        public void CreateRoom()
        {
            validateRoomOptions();

            RoomOptions roomOps = new RoomOptions()
            {
                IsOpen = isPublic,
                IsVisible = true,
                MaxPlayers = (byte)roomSize_Int
            };

            PhotonNetwork.JoinOrCreateRoom(roomName_String, roomOps, TypedLobby.Default);
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

        public override void OnJoinedRoom()
        {
            lobbyCanvas.SetActive(false);

            Photon_Manager.LogMessage("Joined Room. Room Name : " + roomName.text);
            //PhotonNetwork.Instantiate("player", Vector3.zero, Quaternion.identity, 0);
        }

        #region Update Room
        // Check if rooms are updated
        public override void OnRoomListUpdate(List<RoomInfo> roomList)
        {
            RemoveRoomListings();
            foreach (RoomInfo room in roomList)
            {
                ListRoom(room);
            }
        }

        // Remove all the room. While the childcount is 0, continue destroy until not 0
        void RemoveRoomListings()
        {
            while(roomsPanel.childCount != 0)
            {
                Destroy(roomsPanel.GetChild(0).gameObject);
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