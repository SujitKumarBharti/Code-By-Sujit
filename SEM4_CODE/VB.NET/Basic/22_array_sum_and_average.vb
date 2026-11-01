Imports System

Module ArraySumAverage
    Sub Main()
        Dim scores() As Integer = {75, 88, 92, 64, 85}             ' Initialize variable
        Dim sum As Integer = 0                                     ' Initialize variable

        For Each score As Integer In scores
            sum += score
        Next

        Dim avg As Double = sum / scores.Length                    ' Initialize variable

        Console.WriteLine("Scores: " & String.Join(", ", scores))  ' Print output to console
        Console.WriteLine("Total Sum: " & sum)                     ' Print output to console
        Console.WriteLine("Average  : " & avg.ToString("F2"))      ' Print output to console
    End Sub
End Module
