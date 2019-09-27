using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;


public class PluginTester : MonoBehaviour
{
    const string DLL_NAME = "Tutorial2";

   [DllImport(DLL_NAME, EntryPoint="SimpleFunction")]
   private static extern int SimpleFunction();

    [DllImport(DLL_NAME,EntryPoint="GetUnityTransformX")]
    private static extern float GetUnityTransformX();

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.S))
        {
           Debug.Log(SimpleFunction());
        }

        if (Input.GetKeyDown(KeyCode.K))
        {
            Debug.Log(GetUnityTransformX());
           
        }
    }
}
