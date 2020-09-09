using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class Photon_RoomCustomMatch : MonoBehaviourPunCallbacks
{
    public bool isOpen;
    public bool isVisible;
    public string roomName;
    public int curPlayerCount;
    public int maxPlayerCount;

    [Header("Room properties")]
    [TextArea(10,500)]
    public string roomProperties;

    public void RoomInfos()
    {
        if (PhotonNetwork.InRoom)
        {
            isOpen = PhotonNetwork.CurrentRoom.IsOpen;
            isVisible = PhotonNetwork.CurrentRoom.IsVisible;
            roomName = PhotonNetwork.CurrentRoom.Name;
            curPlayerCount = PhotonNetwork.CurrentRoom.PlayerCount;
            maxPlayerCount = PhotonNetwork.CurrentRoom.MaxPlayers;
            roomProperties = PhotonNetwork.CurrentRoom.ToStringFull();
        }
    }
}
