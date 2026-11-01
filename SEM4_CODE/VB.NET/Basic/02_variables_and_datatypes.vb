Imports System

Module VariablesAndDataTypes
    Sub Main()
        Dim studentName As String = "Sujit Kumar"          ' Variable declarations using Dim
        Dim rollNo As Integer = 101
        Dim percentage As Double = 87.65
        Dim grade As Char = "A"c
        Dim isEnrolled As Boolean = True

        Const PI As Double = 3.14159                       ' Constant declaration

        Console.WriteLine("Student Name: " & studentName)  ' Demonstrates Dim, Const, Integer, Double, String, Boolean, and Char
        Console.WriteLine("Roll Number : " & rollNo)
        Console.WriteLine("Percentage  : " & percentage & "%")
        Console.WriteLine("Grade       : " & grade)
        Console.WriteLine("Is Enrolled : " & isEnrolled)
        Console.WriteLine("Constant PI : " & PI)
    End Sub
End Module
