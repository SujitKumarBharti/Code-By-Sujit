Imports System

Public Structure Point2D
    Public X As Integer
    Public Y As Integer

    Public Sub New(ByVal xCoord As Integer, ByVal yCoord As Integer)
        X = xCoord
        Y = yCoord
    End Sub

    Public Function DistanceFromOrigin() As Double
        Return Math.Sqrt(X * X + Y * Y)
    End Function
End Structure

Module StructureDemo
    Sub Main()
        Dim p As New Point2D(3, 4)
        Console.WriteLine("Point: (" & p.X & ", " & p.Y & ")")                ' Print output to console
        Console.WriteLine("Distance from Origin: " & p.DistanceFromOrigin())  ' Print output to console
    End Sub
End Module
