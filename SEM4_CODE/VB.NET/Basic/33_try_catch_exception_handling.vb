Imports System

Module ExceptionHandlingDemo
    Sub Main()
        Dim a As Integer = 100                                                              ' Initialize variable
        Dim b As Integer = 0                                                                ' Initialize variable

        Try
            Console.WriteLine("Attempting division: " & a & " / " & b)                      ' Print output to console
            Dim res As Integer = a \ b                                                      ' Initialize variable
            Console.WriteLine("Result: " & res)                                             ' Print output to console
        Catch ex As DivideByZeroException
            Console.WriteLine("Error Caught: Cannot divide by zero! (" & ex.Message & ")")  ' Print output to console
        Catch ex As Exception
            Console.WriteLine("General Error: " & ex.Message)                               ' Print output to console
        Finally
            Console.WriteLine("Finally block executed (resources cleanly closed).")         ' Print output to console
        End Try
    End Sub
End Module
