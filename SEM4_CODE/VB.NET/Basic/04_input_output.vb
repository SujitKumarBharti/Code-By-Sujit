Imports System

Module ConsoleInputOutput
    Sub Main()
        Console.Write("Enter your name: ")  ' Demonstrates Console.ReadLine and Conversion (CInt, CDbl, Convert.ToInt32)
        Dim name As String = Console.ReadLine()
        If String.IsNullOrEmpty(name) Then name = "Student"

        Console.Write("Enter your birth year: ")
        Dim yearStr As String = Console.ReadLine()
        Dim birthYear As Integer = 2004
        If Not String.IsNullOrEmpty(yearStr) Then
            Integer.TryParse(yearStr, birthYear)
        End If

        Dim age As Integer = DateTime.Now.Year - birthYear
        Console.WriteLine("Hello " & name & ", your approximate age is " & age & " years.")
    End Sub
End Module
