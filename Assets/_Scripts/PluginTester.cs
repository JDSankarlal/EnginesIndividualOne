using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;


public class PluginTester : MonoBehaviour
{
    const string DLL_NAME = "Tutorial2";
    [DllImport(DLL_NAME)]
    private static extern int SimpleFunction();
    [DllImport(DLL_NAME)]
    private static extern float GetTransform(float x, float y, float z);

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.S))
        {
            Debug.Log(SimpleFunction());
        }

        if (Input.GetKeyDown(KeyCode.K))
        {
            Debug.Log(GetTransform(transform.position.x, transform.position.y, transform.position.z));
           
        }
    }
}
