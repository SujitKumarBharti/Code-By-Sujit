Imports System

Module ReverseNumberDemo
    Sub Main()
        Dim num As Integer = 98765                    ' Initialize variable
        Dim temp As Integer = num                     ' Initialize variable
        Dim rev As Integer = 0                        ' Initialize variable

        While temp > 0
            Dim remDigit As Integer = temp Mod 10     ' Initialize variable
            rev = (rev * 10) + remDigit
            temp \= 10
        End While

        Console.WriteLine("Original Number: " & num)  ' Print output to console
        Console.WriteLine("Reversed Number: " & rev)  ' Print output to console
    End Sub
End Module
