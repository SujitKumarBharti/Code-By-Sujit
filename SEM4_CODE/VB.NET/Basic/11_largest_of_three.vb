Imports System

Module LargestOfThree
    Sub Main()
        Dim a As Integer = 45                                                                  ' Initialize variable
        Dim b As Integer = 92                                                                  ' Initialize variable
        Dim c As Integer = 67                                                                  ' Initialize variable
        Dim largest As Integer

        If a >= b AndAlso a >= c Then
            largest = a
        ElseIf b >= a AndAlso b >= c Then
            largest = b
        Else
            largest = c
        End If

        Console.WriteLine("Among " & a & ", " & b & ", and " & c & ": Largest is " & largest)  ' Print output to console
    End Sub
End Module
