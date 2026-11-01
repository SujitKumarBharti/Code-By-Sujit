Imports System

Module IfElseConditions
    Sub Main()
        Dim marks As Integer = 78                                       ' Initialize variable
        Dim result As String

        If marks >= 90 Then
            result = "Grade A+ (Distinction)"
        ElseIf marks >= 75 Then
            result = "Grade A (First Class)"
        ElseIf marks >= 60 Then
            result = "Grade B (Second Class)"
        ElseIf marks >= 40 Then
            result = "Grade C (Pass)"
        Else
            result = "Fail"
        End If

        Console.WriteLine("Marks: " & marks & " -> Result: " & result)  ' Print output to console
    End Sub
End Module
