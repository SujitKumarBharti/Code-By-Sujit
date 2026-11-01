Imports System
Imports System.IO

Module FileIODemo
    Sub Main()
        Dim filePath As String = "sample_test.txt"

        File.WriteAllText(filePath, "Hello from VB.NET File Handling!" & Environment.NewLine)  ' Writing text to file
        File.AppendAllText(filePath, "Line 2: Appended successfully.")

        Console.WriteLine("File written. Reading contents:")
        Dim readContent As String = File.ReadAllText(filePath)
        Console.WriteLine(readContent)

        If File.Exists(filePath) Then                                                          ' Cleanup
            File.Delete(filePath)
            Console.WriteLine("Temporary file cleaned up.")
        End If
    End Sub
End Module
