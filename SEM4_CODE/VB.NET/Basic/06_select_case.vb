Imports System

Module SelectCaseDemo
    Sub Main()
        Dim dayNum As Integer = 4                                           ' Initialize variable
        Dim dayName As String

        Select Case dayNum
            Case 1
                dayName = "Monday"
            Case 2
                dayName = "Tuesday"
            Case 3
                dayName = "Wednesday"
            Case 4
                dayName = "Thursday"
            Case 5
                dayName = "Friday"
            Case 6
                dayName = "Saturday"
            Case 7
                dayName = "Sunday"
            Case Else
                dayName = "Invalid Day"
        End Select

        Console.WriteLine("Day " & dayNum & " corresponds to: " & dayName)  ' Print output to console
    End Sub
End Module
