using UnityEngine;
using PlayFab;
using PlayFab.ClientModels;
using Photon.Pun;
using Photon.Realtime;
using TMPro;

namespace moi.photonConnection
{
    public class Login : MonoBehaviour
    {
        public TMP_InputField RegisterUser;
        public TMP_InputField RegisterEmail;
        public TMP_InputField RegisterPassword;

        public TMP_InputField LoginUser;
        public TMP_InputField LoginPassword;

        public bool IsAuthenticated = false;

        public string _playFabPlayerIdCache;

        public GameObject ConnectedPanel;
        public GameObject ErrorPanel;

        public TextMeshProUGUI ErrorText;

        public void CreateAccount()
        {
            RegisterPlayFabUserRequest request = new RegisterPlayFabUserRequest();
            request.Username = RegisterUser.text;
            request.Email = RegisterEmail.text;
            request.Password = RegisterPassword.text;
            PlayFabClientAPI.RegisterPlayFabUser(request, result =>
             {
                 IsAuthenticated = true;
                 LogMessage("You are now logged in");
                 ConnectedPanel.SetActive(true);
             }, error => {
                 IsAuthenticated = false;
                 Debug.Log(error.ErrorMessage);
                 ErrorPanel.SetActive(true);
             },null);
        }

        public void LoginAccount()
        {
            LoginWithPlayFabRequest request = new LoginWithPlayFabRequest();
            request.Username = LoginUser.text;
            request.Password = LoginPassword.text;
            PlayFabClientAPI.LoginWithPlayFab(request, RequestPhotonToken, OnPlayFabError);
        }

        public void RequestPhotonToken(LoginResult obj)
        {
            LogMessage("PlayFab authenticated. Requesting photon token...");

            _playFabPlayerIdCache = obj.PlayFabId;

            PlayFabClientAPI.GetPhotonAuthenticationToken(new GetPhotonAuthenticationTokenRequest()
            {
                PhotonApplicationId = PhotonNetwork.PhotonServerSettings.AppSettings.AppIdRealtime
            }, AuthenticateWithPhoton, OnPlayFabError); 
        }

        void AuthenticateWithPhoton(GetPhotonAuthenticationTokenResult obj)
        {
            LogMessage("Photon token acquired " + obj.PhotonCustomAuthenticationToken + " Authentication complete");

            // We set AuthType to custom, meanign we bring our own, PlayFab authentication procedure
            var customAuth = new AuthenticationValues { AuthType = CustomAuthenticationType.Custom };

            // PlayFab is expecting this parameter to contain player PlayFab ID (!) and not username
            customAuth.AddAuthParameter("username", _playFabPlayerIdCache); // expected by PlayFab custom auth service

            // PlayFab expects it to contain Photon Authentication Token issues to your during previous step
            customAuth.AddAuthParameter("token", obj.PhotonCustomAuthenticationToken);

            // Use this authentication parameter throughout the entire application
            PhotonNetwork.AuthValues = customAuth;

            // We're separating connecting to Photon to Photon_Manager.cs
            //PhotonNetwork.ConnectUsingSettings();

            ConnectedPanel.SetActive(true);
        }

        void OnPlayFabError(PlayFabError obj)
        {
            Debug.LogError(obj.GenerateErrorReport());
            ErrorPanel.SetActive(true);
        }

        public void LogMessage(string message)
        {
            Debug.Log("PlayFab + Photon _Moi : " + message);
            ErrorText.SetText("PlayFab + Photon _Moi : " + message);
        }
    }
}