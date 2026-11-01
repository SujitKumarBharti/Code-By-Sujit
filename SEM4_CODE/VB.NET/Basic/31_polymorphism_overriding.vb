Imports System

Public Class Shape
    Public Overridable Sub Draw()
        Console.WriteLine("Drawing a generic shape.")  ' Print output to console
    End Sub
End Class

Public Class Circle
    Inherits Shape
    Public Overrides Sub Draw()
        Console.WriteLine("Drawing a Circle.")         ' Print output to console
    End Sub
End Class

Public Class Rectangle
    Inherits Shape
    Public Overrides Sub Draw()
        Console.WriteLine("Drawing a Rectangle.")      ' Print output to console
    End Sub
End Class

Module PolymorphismDemo
    Sub Main()
        Dim s1 As Shape = New Circle()                 ' Initialize variable
        Dim s2 As Shape = New Rectangle()              ' Initialize variable

        s1.Draw()
        s2.Draw()
    End Sub
End Module
