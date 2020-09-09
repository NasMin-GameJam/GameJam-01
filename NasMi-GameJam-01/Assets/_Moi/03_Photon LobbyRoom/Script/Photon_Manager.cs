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

            // Join the lobby
            PhotonNetwork.JoinLobby(TypedLobby.Default);
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
        public static void LogMessage(string message)
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
    }
}