using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace moi.photonRoom
{
    public class PlayerInfo : MonoBehaviour
    {
        public static PlayerInfo PI;
        public const string myChar = "MyCharacter";

        public int mySelectedCharacter;

        public GameObject[] allCharacters;

        private void OnEnable()
        {
            if(PlayerInfo.PI == null)
            {
                PlayerInfo.PI = this;
            }
            else
            {
                if(PlayerInfo.PI != this){
                    Destroy(PlayerInfo.PI.gameObject);
                    PlayerInfo.PI = this;
                }
            }
            DontDestroyOnLoad(this.gameObject);
        }

        // Start is called before the first frame update
        void Start()
        {
            if (PlayerPrefs.HasKey(myChar))
            {
                mySelectedCharacter = PlayerPrefs.GetInt(myChar);
            }
            else
            {
                mySelectedCharacter = 0;
                PlayerPrefs.SetInt(myChar, mySelectedCharacter);
            }
        }

        // Update is called once per frame
        void Update()
        {

        }

        public void OnClick_NextCharacter()
        {

        }

        public void OnClick_PreviousCharacter()
        {

        }
    }
}