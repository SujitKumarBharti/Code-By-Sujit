Imports System

Public Interface IPrintable
    Sub PrintDocument()
End Interface

Public Class Invoice
    Implements IPrintable

    Private InvoiceNumber As String

    Public Sub New(ByVal num As String)
        InvoiceNumber = num
    End Sub

    Public Sub PrintDocument() Implements IPrintable.PrintDocument
        Console.WriteLine("Printing Invoice #" & InvoiceNumber & " ... Done.")  ' Print output to console
    End Sub
End Class

Module InterfaceDemo
    Sub Main()
        Dim item As IPrintable = New Invoice("INV-2024-001")                    ' Initialize variable
        item.PrintDocument()
    End Sub
End Module
