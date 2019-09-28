using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;


public class PluginTester : MonoBehaviour
{
    const string DLL_NAME = "Tutorial2";

   [DllImport(DLL_NAME, EntryPoint="SimpleFunction")]
   private static extern int SimpleFunction();

    [DllImport(DLL_NAME)]
    private static extern void SaveTransform(float x, float y, float z);

    [DllImport(DLL_NAME)]
    private static extern float LoadTransformX();

    
    [DllImport(DLL_NAME)]
    private static extern float LoadTransformY();

    
    [DllImport(DLL_NAME)]
    private static extern float LoadTransformZ();
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.S))
        {
           Debug.Log(SimpleFunction());
        }

        if (Input.GetKeyDown(KeyCode.K))
        {
            SaveTransform(transform.position.x, transform.position.y, transform.position.z);
           
        }

        if (Input.GetKeyDown(KeyCode.L))
        {
            transform.position= new Vector3 (LoadTransformX(),LoadTransformY(),LoadTransformZ());


        }        
    }
}
