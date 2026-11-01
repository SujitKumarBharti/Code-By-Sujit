Imports System

Module FactorialDemo
    Sub Main()
        Dim n As Integer = 5                                                ' Initialize variable
        Dim fact As Long = 1                                                ' Initialize variable

        For i As Integer = 1 To n
            fact *= i
        Next

        Console.WriteLine("Factorial of " & n & " (" & n & "!) = " & fact)  ' Print output to console
    End Sub
End Module
