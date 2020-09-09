using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

namespace moi.photonLobby
{
    public class Player_SignIn_Info : MonoBehaviour
    {
        public TMP_InputField SignIn;
        public TMP_InputField Password;

        const string SignInInfo = "SignInInfo";
        const string PasswordInfo = "PasswordInfo";

        void Start()
        {
            if (PlayerPrefs.HasKey(SignInInfo))
            {
                SignIn.text = PlayerPrefs.GetString(SignInInfo);
                Password.text = PlayerPrefs.GetString(PasswordInfo);

                Debug.Log("Found sign in info");
            }
            else
            {
                Debug.Log("No sign info registered yet");
            }
        }

        public void SaveInfo()
        {
            if (PlayerPrefs.HasKey(SignInInfo))
            {
                string tempSignIn = PlayerPrefs.GetString(SignInInfo);
                if(SignIn.text != tempSignIn)
                {
                    PlayerPrefs.SetString(SignInInfo, SignIn.text);
                    PlayerPrefs.SetString(PasswordInfo, Password.text);

                    Debug.Log("Saved sign in info");
                }
            }
            else
            {
                Debug.Log("No sign info registered yet. Saving one");
                PlayerPrefs.SetString(SignInInfo, SignIn.text);
                PlayerPrefs.SetString(PasswordInfo, Password.text);
            }
        }
    }
}