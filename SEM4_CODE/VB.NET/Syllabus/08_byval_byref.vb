Imports System

Module ByValByRefDemo
    Sub Swap(ByRef a As Integer, ByRef b As Integer)
        Dim temp As Integer = a                           ' Initialize variable
        a = b                                             ' Assign variable value
        b = temp                                          ' Assign variable value
    End Sub

    Sub Main()
        Dim x As Integer = 10, y As Integer = 20          ' Initialize variable
        Console.WriteLine("Before: x=" & x & ", y=" & y)  ' Display console output
        Swap(x, y)
        Console.WriteLine("After: x=" & x & ", y=" & y)   ' Display console output
    End Sub
End Module
