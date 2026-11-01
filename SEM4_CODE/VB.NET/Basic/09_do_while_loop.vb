Imports System

Module DoLoopDemo
    Sub Main()
        Dim i As Integer = 1                 ' Do While Loop (checks at entry)
        Console.WriteLine("1. Do While Loop:")
        Do While i <= 3
            Console.WriteLine("  i = " & i)
            i += 1
        Loop

        Dim j As Integer = 5                 ' Do ... Loop Until (checks at exit)
        Console.WriteLine("2. Do Loop Until (Exit Condition):")
        Do
            Console.WriteLine("  j = " & j)
            j -= 1
        Loop Until j = 2
    End Sub
End Module
