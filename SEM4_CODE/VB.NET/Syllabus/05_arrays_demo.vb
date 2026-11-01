Imports System

Module ArraysDemo
    Sub Main()
        Dim numbers() As Integer = {10, 20, 30, 40, 50}  ' Initialize variable
        Dim sum As Integer = 0                           ' Initialize variable
        For Each num As Integer In numbers               ' Iterate loop
            sum += num                                   ' Assign variable value
        Next
        Console.WriteLine("Total sum of array: " & sum)  ' Display console output
    End Sub
End Module
