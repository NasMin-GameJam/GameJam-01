using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;
using TMPro;
using UnityEngine.UI;

namespace moi.photonLobby
{
    public class Photon_Manager : MonoBehaviourPunCallbacks
    {
        [Header("UI")]
        public GameObject ConnectedPhotonPanel;
        public Button btnConnectPhoton;
        public GameObject ErrorPanel;

        public TextMeshProUGUI errorText;

        public GameObject lobbyCanvas;

        [Header("Room Options")]
        public TMP_InputField roomName;
        public Toggle isPublic;
        public TMP_InputField maxPlayer;

        int maxNum;


        string GameVersion = "0.0.0";

        // Connect to Photon Server
        public void Connect()
        {
            PhotonNetwork.GameVersion = GameVersion;
            PhotonNetwork.ConnectUsingSettings();
            LogMessage("Connecting to server...");

            // Just so the player doesn't spam the button
            btnConnectPhoton.interactable = false;
        }

        // If we're connected, do next step. In this case, open ConnectedPhotonPanel
        public override void OnConnectedToMaster()
        {
            LogMessage("Connected to server");
            ConnectedPhotonPanel.SetActive(true);

            btnConnectPhoton.interactable = false;
        }

        // If we're disconnected, what is the cause?
        public override void OnDisconnected(DisconnectCause cause)
        {
            ErrorPanel.SetActive(true);
            errorText.SetText(cause.ToString());
            LogMessage(cause.ToString());

            btnConnectPhoton.interactable = true;
        }

        // Custom debug message so we know it come from us.
        public void LogMessage(string message)
        {
            Debug.Log("Photon + PlayFab _Moi : " + message);
        }

        // Usually, we don't need to join lobby if we join room
        // Unless if we do search for empty room
        // CS:Condition Zero use search room
        // CS:GO use CreateOrJoinRandom room
        public override void OnJoinedLobby()
        {
            LogMessage("Joined Lobby");
        }

        public override void OnLeftLobby()
        {
            LogMessage("Left Lobby");
        }

        public void CreateRoom()
        {
            validateRoomOptions();

            int randomRoomName = Random.Range(0, 10000);

            PhotonNetwork.JoinOrCreateRoom(""+ randomRoomName ,new RoomOptions { IsOpen = isPublic, IsVisible = true, MaxPlayers = (byte)maxNum }, TypedLobby.Default);
        }

        public override void OnJoinedRoom()
        {
            lobbyCanvas.SetActive(false);

            LogMessage("Joined Room. " + roomName.text);
            //PhotonNetwork.Instantiate("player", Vector3.zero, Quaternion.identity, 0);
        }

        public void validateRoomOptions () {
            maxNum = int.Parse(maxPlayer.text);
            if(maxNum > 10)
            {
                maxNum = 10;
                maxPlayer.text = "10";
            }else if(maxNum < 0)
            {
                maxNum = 0;
                maxPlayer.text = "0";
            }
        }

        public override void OnCreateRoomFailed(short returnCode, string message)
        {
            LogMessage("Tried to create new but failed");
            LogMessage(message);
        }

        public void OnCancelButtonClicked()
        {
            PhotonNetwork.LeaveRoom();
        }

        public override void OnPlayerEnteredRoom(Player newPlayer)
        {
            base.OnPlayerEnteredRoom(newPlayer);
        }
    }
}