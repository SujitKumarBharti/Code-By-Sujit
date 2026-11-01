Imports System

Module LeapYearCheck
    Sub Main()
        Dim year As Integer = 2024                            ' Initialize variable
        Dim isLeap As Boolean = False                         ' Initialize variable

        If (year Mod 400 = 0) OrElse (year Mod 4 = 0 AndAlso year Mod 100 <> 0) Then
            isLeap = True
        End If

        If isLeap Then
            Console.WriteLine(year & " is a Leap Year.")      ' Print output to console
        Else
            Console.WriteLine(year & " is NOT a Leap Year.")  ' Print output to console
        End If
    End Sub
End Module
