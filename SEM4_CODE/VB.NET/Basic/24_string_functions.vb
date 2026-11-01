Imports System

Module StringFunctionsDemo
    Sub Main()
        Dim str As String = "Visual Basic Programming"                                 ' Initialize variable

        Console.WriteLine("Original String   : '" & str & "'")                         ' Print output to console
        Console.WriteLine("Length            : " & str.Length)                         ' Print output to console
        Console.WriteLine("ToUpper           : " & str.ToUpper())                      ' Print output to console
        Console.WriteLine("ToLower           : " & str.ToLower())                      ' Print output to console
        Console.WriteLine("Substring(0, 6)   : " & str.Substring(0, 6))                ' Print output to console
        Console.WriteLine("Contains 'Basic'  : " & str.Contains("Basic"))              ' Print output to console
        Console.WriteLine("Replace 'Visual'  : " & str.Replace("Visual", "Advanced"))  ' Print output to console
        Console.WriteLine("IndexOf 'Program' : " & str.IndexOf("Program"))             ' Print output to console
    End Sub
End Module
