using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

namespace moi.photonRoom
{
    // This will be put in the Player prefab
    public class AvatarSetup : MonoBehaviour
    {
        private PhotonView PV;
        public int characterValue;
        public GameObject myCharacter;

        // Start is called before the first frame update
        void Start()
        {
            PV = GetComponent<PhotonView>();

            // Make sure to send this from local player
            if (PV.IsMine)
            {
                // All Buffered is chosen so that players that come in late will receive the msg
                PV.RPC("RPC_AddCharacter", RpcTarget.AllBuffered, PlayerInfo.PI.mySelectedCharacter);
            }
        }

        [PunRPC]
        void RPC_AddCharacter(int whichCharacter)
        {
            characterValue = whichCharacter;
            myCharacter = Instantiate(PlayerInfo.PI.allCharacters[whichCharacter],
                transform.position, transform.rotation,transform);
        }
    }
}