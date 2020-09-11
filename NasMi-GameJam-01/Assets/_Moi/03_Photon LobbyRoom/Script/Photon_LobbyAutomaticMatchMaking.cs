using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Photon.Pun;
using Photon.Realtime;

namespace moi.photonLobby
{
    public class Photon_LobbyAutomaticMatchMaking : MonoBehaviourPunCallbacks
    {
        public GameObject lobbyCanvas;

        [Header("Connected Room Panel")]
        public GameObject JoinedRoomPanel;
        public TextMeshProUGUI CreateOrJoinedText;

        [Header("Debugging")]
        public Photon_RoomCustomMatch debugging;

        public void QuickMatch()
        {
            RoomOptions roomOptions = new RoomOptions();
            roomOptions.MaxPlayers = 4;
            roomOptions.IsOpen = true;
            roomOptions.IsVisible = true;

            int rand = Random.Range(0, 10000);
            
            PhotonNetwork.JoinOrCreateRoom(rand.ToString(), roomOptions, TypedLobby.Default);
        }

        public override void OnJoinedRoom()
        {
            Debug.Log("Photon + PlayFab : Joined Room");
        }

        public override void OnJoinRoomFailed(short returnCode, string message)
        {
            Debug.Log("Photon + PlayFab : " + message);
        }
    }
}