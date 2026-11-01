Imports System

Module MultiDimensionalArrayDemo
    Sub Main()
        Dim matrix(1, 2) As Integer          ' 2x3 matrix
        matrix(0, 0) = 1 : matrix(0, 1) = 2 : matrix(0, 2) = 3
        matrix(1, 0) = 4 : matrix(1, 1) = 5 : matrix(1, 2) = 6

        Console.WriteLine("2D Matrix (2 rows x 3 columns):")
        For r As Integer = 0 To 1
            For c As Integer = 0 To 2
                Console.Write(matrix(r, c) & vbTab)
            Next
            Console.WriteLine()
        Next
    End Sub
End Module
