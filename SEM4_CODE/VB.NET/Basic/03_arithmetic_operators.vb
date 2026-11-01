Imports System

Module ArithmeticOperators
    Sub Main()
        Dim a As Integer = 20
        Dim b As Integer = 6

        Console.WriteLine("Given a = " & a & ", b = " & b)  ' Demonstrates +, -, *, /, \ (integer division), Mod, and ^ (exponent)
        Console.WriteLine("Addition         (a + b) : " & (a + b))
        Console.WriteLine("Subtraction      (a - b) : " & (a - b))
        Console.WriteLine("Multiplication   (a * b) : " & (a * b))
        Console.WriteLine("Real Division    (a / b) : " & (a / b))
        Console.WriteLine("Integer Division (a \ b) : " & (a \ b))
        Console.WriteLine("Modulus/Remainder(a Mod b): " & (a Mod b))
        Console.WriteLine("Exponentiation   (a ^ 2) : " & (a ^ 2))
    End Sub
End Module
