Imports System

Module WhileLoopDemo
    Sub Main()
        Dim count As Integer = 1                                ' Initialize variable
        Console.WriteLine("Counting using While...End While:")  ' Print output to console
        While count <= 5
            Console.WriteLine("Count = " & count)               ' Print output to console
            count += 1
        End While
    End Sub
End Module
