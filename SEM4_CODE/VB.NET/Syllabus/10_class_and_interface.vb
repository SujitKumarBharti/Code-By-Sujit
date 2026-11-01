Imports System

Interface IShape
    Function GetArea() As Double
End Interface

Class Rectangle
    Implements IShape
    Private width As Double
    Private height As Double

    Public Sub New(w As Double, h As Double)
        width = w                                               ' Assign variable value
        height = h                                              ' Assign variable value
    End Sub

    Public Function GetArea() As Double Implements IShape.GetArea
        Return width * height                                   ' Return from procedure
    End Function
End Class

Module InterfaceDemo
    Sub Main()
        Dim rect As IShape = New Rectangle(5.0, 4.0)            ' Initialize variable
        Console.WriteLine("Rectangle Area: " & rect.GetArea())  ' Display console output
    End Sub
End Module
