Imports System

Module FibonacciSeries
    Sub Main()
        Dim terms As Integer = 8                                   ' Initialize variable
        Dim a As Integer = 0                                       ' Initialize variable
        Dim b As Integer = 1                                       ' Initialize variable

        Console.Write("Fibonacci Series (" & terms & " terms): ")  ' Print output to console
        For i As Integer = 1 To terms
            Console.Write(a & " ")                                 ' Print output to console
            Dim nextVal As Integer = a + b                         ' Initialize variable
            a = b
            b = nextVal
        Next
        Console.WriteLine()                                        ' Print output to console
    End Sub
End Module
