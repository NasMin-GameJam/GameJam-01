using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Photon.Pun;
using Photon.Realtime;

namespace moi.photonLobby
{
    public class Photon_LobbyAutomaticMatchMaking : MonoBehaviour
    {
        public GameObject lobbyCanvas;

        [Header("Connected Room Panel")]
        public GameObject JoinedRoomPanel;
        public TextMeshProUGUI CreateOrJoinedText;

        [Header("Debugging")]
        public Photon_RoomCustomMatch debugging;


    }
}