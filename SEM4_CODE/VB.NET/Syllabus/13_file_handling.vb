Imports System
Imports System.IO

Module FileHandlingDemo
    Sub Main()
        Dim filePath As String = "sample.txt"            ' Initialize variable
        File.WriteAllText(filePath, "Visual Basic File IO")
        Dim text As String = File.ReadAllText(filePath)  ' Initialize variable
        Console.WriteLine("Read from file: " & text)     ' Display console output
        File.Delete(filePath)
    End Sub
End Module
