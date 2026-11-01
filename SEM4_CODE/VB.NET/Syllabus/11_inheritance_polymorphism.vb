Imports System

Class Animal
    Public Overridable Sub Speak()
        Console.WriteLine("Animal makes a sound")  ' Display console output
    End Sub
End Class

Class Dog
    Inherits Animal
    Public Overrides Sub Speak()
        Console.WriteLine("Dog barks")             ' Display console output
    End Sub
End Class

Module PolymorphismDemo
    Sub Main()
        Dim myPet As Animal = New Dog()            ' Initialize variable
        myPet.Speak()
    End Sub
End Module
