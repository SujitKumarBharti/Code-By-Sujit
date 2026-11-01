Imports System

Module PrimeNumberCheck
    Sub Main()
        Dim num As Integer = 37                                 ' Initialize variable
        Dim isPrime As Boolean = True                           ' Initialize variable

        If num <= 1 Then
            isPrime = False
        Else
            For i As Integer = 2 To CInt(Math.Sqrt(num))
                If num Mod i = 0 Then
                    isPrime = False
                    Exit For
                End If
            Next
        End If

        If isPrime Then
            Console.WriteLine(num & " is a Prime Number.")      ' Print output to console
        Else
            Console.WriteLine(num & " is NOT a Prime Number.")  ' Print output to console
        End If
    End Sub
End Module
