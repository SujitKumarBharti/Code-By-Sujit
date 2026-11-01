Imports System

Module ArraySortingDemo
    Sub Main()
        Dim arr() As Integer = {45, 12, 89, 33, 7}
        Console.WriteLine("Original Array: " & String.Join(", ", arr))

        Array.Sort(arr)                      ' Ascending Sort
        Console.WriteLine("Ascending Sort : " & String.Join(", ", arr))

        Array.Reverse(arr)                   ' Descending Sort
        Console.WriteLine("Descending Sort: " & String.Join(", ", arr))
    End Sub
End Module
