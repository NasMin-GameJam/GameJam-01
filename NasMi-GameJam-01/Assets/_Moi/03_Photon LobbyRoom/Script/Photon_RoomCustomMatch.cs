using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;
using TMPro;

namespace moi.photonLobby
{
    public class Photon_RoomCustomMatch : MonoBehaviourPunCallbacks
    {
        [Header("Debugging Purposes")]
        public bool isOpen;
        public bool isVisible;
        public string roomName;
        public int curPlayerCount;
        public int maxPlayerCount;

        [Header("Room properties")]
        [TextArea(10, 500)]
        public string roomProperties;

        [Header("Player List")]
        public List<Player> players;

        [Header("Player Name Text")]
        public TextMeshProUGUI[] playerNameText;

        public List<string> pNameString;

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

                ClearPlayerListing();

                listPlayers();
            }
        }

        void ClearPlayerListing()
        {
            players = new List<Player>();
        }

        void listPlayers()
        {
            // Need to re-make this.
            // If player left the room, the text update to waiting or something..

            for (int i = 0; i < playerNameText.Length; i++)
            {
                playerNameText[i].SetText(players[i].NickName);
            }
        }

        public override void OnPlayerEnteredRoom(Player newPlayer)
        {
            Debug.Log(newPlayer.ActorNumber);
            //RoomInfos();
            getNames();
        }

        public override void OnPlayerLeftRoom(Player otherPlayer)
        {
            Debug.Log(otherPlayer.ActorNumber);
            //RoomInfos();
            getNames();
        }

        public override void OnJoinedRoom()
        {
            base.OnJoinedRoom();

            Player[] players = PhotonNetwork.PlayerList;

            for (int i = 0; i < players.Length; i++)
            {
                playerNameText[i].SetText(players[i].NickName);
            }

            getNames();
        }

        void getNames()
        {
            pNameString = new List<string>();

            foreach (Player p in PhotonNetwork.PlayerList)
            {
                pNameString.Add(p.NickName);
            }


        }
    }
}