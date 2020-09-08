using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;
using TMPro;

namespace moi.photonLobby
{
    public class Photon_Manager : MonoBehaviourPunCallbacks
    {
        public GameObject ConnectedPhotonPanel;
        public GameObject ErrorPanel;

        public TextMeshProUGUI errorText;

        string GameVersion = "0.0.0";

        public void Connect()
        {
            PhotonNetwork.GameVersion = GameVersion;
            PhotonNetwork.ConnectUsingSettings();
            LogMessage("Connecting to server...");
        }

        public override void OnConnectedToMaster()
        {
            LogMessage("Connected to server");
            ConnectedPhotonPanel.SetActive(true);
        }

        public override void OnDisconnected(DisconnectCause cause)
        {
            ErrorPanel.SetActive(true);
            errorText.SetText(cause.ToString());
            LogMessage(cause.ToString());
        }

        public void LogMessage(string message)
        {
            Debug.Log("Photon + PlayFab _Moi : " + message);
        }

        public override void OnJoinedLobby()
        {
            LogMessage("Joined Lobby");
        }

        public void CreateRoom()
        {
            PhotonNetwork.JoinOrCreateRoom("test",new RoomOptions { IsOpen = true }, TypedLobby.Default);
        }

        public override void OnJoinedRoom()
        {
            LogMessage("Joined Room");
        }
    }
}