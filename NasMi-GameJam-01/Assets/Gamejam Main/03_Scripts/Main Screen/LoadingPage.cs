using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

namespace moi.loadingPage
{
    public class LoadingPage : MonoBehaviour
    {
        int index = 0;
        [SerializeField]
        List<string> loadingTexts;

        public TextMeshProUGUI _text;

        float counter = 5;
        bool canCount = false;

        [Header("Screens")]
        public GameObject currentScreen;
        public GameObject nextScreen;

        [Header("Auto start page")]
        public GameObject startPage;
        public GameObject[] offPage;

        private void OnEnable()
        {
            startPage.SetActive(true);

            for (int i = 0; i < offPage.Length; i++)
            {
                offPage[i].SetActive(false);
            }
        }

        // Start is called before the first frame update
        void Start()
        {
            loadingTexts.Add("...");
            loadingTexts.Add("Sometimes it's best to feel like a duck than a person..");
            loadingTexts.Add("Looking for bugs that developer forgot to fix..");
            loadingTexts.Add("Looking for good tips for you. Hang on..");
            loadingTexts.Add("You can wait forever.. If you want to..");
            loadingTexts.Add("Have you found the bug we left?");
            loadingTexts.Add("60 seconds is equal to 1 minute");
            loadingTexts.Add("Yolo. Seriously, don't die");
            loadingTexts.Add("Thanks for reading");
            loadingTexts.Add("Can't find a good tips for you. Try again later");
            loadingTexts.Add("I need coffee");

            index = Random.Range(0, loadingTexts.Count);
            _text.SetText(loadingTexts[index]);
        }

        // Update is called once per frame
        void Update()
        {
            if (!canCount) return;

            counter -= 1 * Time.deltaTime;
            if (counter < 0) {
                canCount = false;

                currentScreen.SetActive(false);
                if (nextScreen != null)
                    nextScreen.SetActive(true);
                else
                    Debug.LogWarning("Next screen for loading is not set yet");
            }
        }

        public void OnClick_StartCount()
        {
            canCount = true;
        }
    }
}