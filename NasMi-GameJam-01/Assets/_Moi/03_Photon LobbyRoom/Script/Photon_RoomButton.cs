using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Photon.Pun;

namespace moi.photonLobby
{
    public class Photon_RoomButton : MonoBehaviour
    {
        public TextMeshProUGUI nameText;
        public TextMeshProUGUI sizeText;

        public string roomName;
        public int roomSize;

        public void SetRoom()
        {
            nameText.SetText(roomName);
            sizeText.SetText(roomSize.ToString());
        }

        public void OnClick_JoinRoom()
        {
            PhotonNetwork.JoinRoom(roomName);

        }
    }
}