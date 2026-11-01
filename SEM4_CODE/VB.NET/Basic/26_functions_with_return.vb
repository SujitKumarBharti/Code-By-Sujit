Imports System

Module CustomFunctionsDemo
    Function CalculateCircleArea(ByVal radius As Double) As Double
        Return Math.PI * radius * radius
    End Function

    Function MaxOfTwo(ByVal x As Integer, ByVal y As Integer) As Integer
        If x > y Then
            Return x
        Else
            Return y
        End If
    End Function

    Sub Main()
        Dim r As Double = 7.0                                                               ' Initialize variable
        Dim area As Double = CalculateCircleArea(r)                                         ' Initialize variable
        Console.WriteLine("Area of Circle with radius " & r & " = " & area.ToString("F2"))  ' Print output to console

        Console.WriteLine("Max of (45, 78) = " & MaxOfTwo(45, 78))                          ' Print output to console
    End Sub
End Module
