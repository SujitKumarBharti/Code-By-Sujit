Imports System

Module PalindromeNumberCheck
    Sub Main()
        Dim num As Integer = 12321                                   ' Initialize variable
        Dim temp As Integer = num                                    ' Initialize variable
        Dim rev As Integer = 0                                       ' Initialize variable

        While temp > 0
            Dim remDigit As Integer = temp Mod 10                    ' Initialize variable
            rev = (rev * 10) + remDigit
            temp \= 10
        End While

        If num = rev Then
            Console.WriteLine(num & " is a Palindrome Number.")      ' Print output to console
        Else
            Console.WriteLine(num & " is NOT a Palindrome Number.")  ' Print output to console
        End If
    End Sub
End Module
