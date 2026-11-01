Imports System

Module ForNextLoopDemo
    Sub Main()
        Console.WriteLine("1. For...Next Loop (1 to 5):")                ' Print output to console
        For i As Integer = 1 To 5
            Console.Write(i & " ")                                       ' Print output to console
        Next
        Console.WriteLine()                                              ' Print output to console

        Console.WriteLine("2. For...Next Loop with Step 2 (10 to 20):")  ' Print output to console
        For i As Integer = 10 To 20 Step 2
            Console.Write(i & " ")                                       ' Print output to console
        Next
        Console.WriteLine()                                              ' Print output to console

        Console.WriteLine("3. For Each Loop (Array of Cities):")         ' Print output to console
        Dim cities() As String = {"Ranchi", "Patna", "Delhi", "Mumbai"}  ' Initialize variable
        For Each city As String In cities
            Console.WriteLine(" - " & city)                              ' Print output to console
        Next
    End Sub
End Module
