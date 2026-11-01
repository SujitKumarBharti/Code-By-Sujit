Imports System

Module DecisionLoopsDemo
    Sub Main()
        Dim count As Integer = 5                    ' Initialize variable
        If count > 0 Then                           ' Evaluate condition
            Console.WriteLine("Count is positive")  ' Display console output
        End If
        Console.WriteLine("Loop output:")           ' Display console output
        For i As Integer = 1 To count               ' Iterate loop
            Console.WriteLine("Step: " & i)         ' Display console output
        Next
    End Sub
End Module
