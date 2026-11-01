Imports System

Module SubsAndFunctions
    Sub Greet(name As String)
        Console.WriteLine("Hello, " & name)       ' Display console output
    End Sub

    Function Multiply(a As Integer, b As Integer) As Integer
        Return a * b                              ' Return from procedure
    End Function

    Sub Main()
        Greet("Sujit")
        Dim product As Integer = Multiply(6, 7)   ' Initialize variable
        Console.WriteLine("Product: " & product)  ' Display console output
    End Sub
End Module
