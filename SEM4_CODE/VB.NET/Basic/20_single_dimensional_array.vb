Imports System

Module SingleArrayDemo
    Sub Main()
        Dim numbers(4) As Integer                             ' Array of 5 integers (indices 0 to 4)
        numbers(0) = 15
        numbers(1) = 28
        numbers(2) = 42
        numbers(3) = 63
        numbers(4) = 87

        Console.WriteLine("Lower Bound: " & LBound(numbers))  ' Demonstrates array declaration, UBound, LBound, and indexing
        Console.WriteLine("Upper Bound: " & UBound(numbers))
        Console.WriteLine("Array Length: " & numbers.Length)

        Console.WriteLine("Array Elements:")
        For i As Integer = 0 To numbers.Length - 1
            Console.WriteLine("Index " & i & " = " & numbers(i))
        Next
    End Sub
End Module
