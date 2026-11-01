Imports System

Module SumOfDigitsDemo
    Sub Main()
        Dim num As Integer = 4567                                          ' Initialize variable
        Dim temp As Integer = num                                          ' Initialize variable
        Dim sum As Integer = 0                                             ' Initialize variable

        While temp > 0
            sum += (temp Mod 10)
            temp \= 10
        End While

        Console.WriteLine("Number: " & num & " -> Sum of digits: " & sum)  ' Print output to console
    End Sub
End Module
