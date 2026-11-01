Imports System

Module MultiplicationTable
    Sub Main()
        Dim num As Integer = 9                                      ' Initialize variable
        Console.WriteLine("Multiplication Table for " & num & ":")  ' Print output to console

        For i As Integer = 1 To 10
            Console.WriteLine(num & " x " & i & " = " & (num * i))  ' Print output to console
        Next
    End Sub
End Module
