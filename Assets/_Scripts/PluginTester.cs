using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;


public class PluginTester : MonoBehaviour
{
    const string DLL_NAME = "Tutorial2";
    [DllImport(DLL_NAME)]
    private static extern int SimpleFunction();
    private static extern float GetXTransform();
    private static extern float GetYTransform();
    private static extern float GetZTransform();

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.S))
        {
            Debug.Log(SimpleFunction());
        }
    }
}
