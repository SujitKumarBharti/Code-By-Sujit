Imports System

Public Class Person
    Protected Name As String
    Protected Age As Integer

    Public Sub New(ByVal name As String, ByVal age As Integer)
        Me.Name = name
        Me.Age = age
    End Sub

    Public Sub ShowPerson()
        Console.WriteLine("Name: " & Name & ", Age: " & Age)
    End Sub
End Class

Public Class Employee
    Inherits Person

    Private EmpId As Integer
    Private Department As String

    Public Sub New(ByVal name As String, ByVal age As Integer, ByVal empId As Integer, ByVal dept As String)
        MyBase.New(name, age)                ' Call base class constructor
        Me.EmpId = empId
        Me.Department = dept
    End Sub

    Public Sub ShowEmployee()
        ShowPerson()
        Console.WriteLine("Emp ID: " & EmpId & ", Department: " & Department)
    End Sub
End Class

Module InheritanceDemo
    Sub Main()
        Dim emp As New Employee("Vikram Singh", 28, 501, "IT Solutions")
        emp.ShowEmployee()
    End Sub
End Module
