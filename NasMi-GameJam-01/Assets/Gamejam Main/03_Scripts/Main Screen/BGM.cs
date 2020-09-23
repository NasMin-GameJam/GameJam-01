using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace moi.bgm
{
    public class BGM : MonoBehaviour
    {
        [SerializeField]
        AudioSource source;
        [SerializeField]
        AudioClip[] clip;

        [SerializeField]
        int index = 0;

        // Start is called before the first frame update
        void Start()
        {
            if (source == null && clip.Length == 0) return;

            index = Random.Range(0, clip.Length);
            source.clip = clip[index];
            source.Play();
        }

        // Update is called once per frame
        void Update()
        {
#if UNITY_EDITOR
            if (Input.GetKeyUp(KeyCode.E))
            {
               // Debug.Log("Pressed E");
                if(index < clip.Length - 1)
                {
                    index++;
                    source.clip = clip[index];
                    source.Play();
                   // Debug.Log("Index ++");
                }
                else if(index == clip.Length - 1)
                {
                    index = 0;
                    source.clip = clip[index];
                    source.Play();
                   // Debug.Log("Index == 0");
                }
            }
#endif
        }
    }
}