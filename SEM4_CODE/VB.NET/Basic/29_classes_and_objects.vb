Imports System

Public Class Student
    Private _name As String
    Private _rollNo As Integer

    Public Sub New(ByVal name As String, ByVal rollNo As Integer)  ' Constructor
        _name = name
        _rollNo = rollNo
    End Sub

    Public Property Name As String                                 ' Property Get/Set
        Get
            Return _name
        End Get
        Set(ByVal value As String)
            _name = value
        End Set
    End Property

    Public Sub DisplayInfo()
        Console.WriteLine("Student Name: " & _name & ", Roll Number: " & _rollNo)
    End Sub
End Class

Module ClassDemo
    Sub Main()
        Dim s1 As New Student("Rahul Sharma", 102)
        s1.DisplayInfo()
        s1.Name = "Rahul S. Verma"
        Console.WriteLine("Updated Name via Property: " & s1.Name)
    End Sub
End Module
