Imports System
Module SubroutinesByValByRef                                          ' ByRef passes the reference (original variable changes)
    Sub SwapByVal(ByVal x As Integer, ByVal y As Integer)
        Dim temp As Integer = x
        x = y
        y = temp
    End Sub

    Sub SwapByRef(ByRef x As Integer, ByRef y As Integer)
        Dim temp As Integer = x
        x = y
        y = temp
    End Sub

    Sub Main()
        Dim a As Integer = 10
        Dim b As Integer = 20

        Console.WriteLine("Initial values: a = " & a & ", b = " & b)  ' ByVal passes a copy (original variable unchanged)

        SwapByVal(a, b)
        Console.WriteLine("After SwapByVal: a = " & a & ", b = " & b & " (Unchanged)")

        SwapByRef(a, b)
        Console.WriteLine("After SwapByRef: a = " & a & ", b = " & b & " (Swapped!)")
    End Sub
End Module
