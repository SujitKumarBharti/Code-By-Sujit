Imports System

Module EvenOddCheck
    Sub Main()
        Dim num As Integer = 34                             ' Initialize variable

        If num Mod 2 = 0 Then
            Console.WriteLine(num & " is an Even Number.")  ' Print output to console
        Else
            Console.WriteLine(num & " is an Odd Number.")   ' Print output to console
        End If
    End Sub
End Module
