Imports System

Module DateTimeFunctionsDemo
    Sub Main()
        Dim current As DateTime = DateTime.Now                                              ' Initialize variable

        Console.WriteLine("Current DateTime : " & current.ToString())                       ' Print output to console
        Console.WriteLine("Short Date       : " & current.ToShortDateString())              ' Print output to console
        Console.WriteLine("Short Time       : " & current.ToShortTimeString())              ' Print output to console
        Console.WriteLine("Year             : " & current.Year)                             ' Print output to console
        Console.WriteLine("Month            : " & current.Month)                            ' Print output to console
        Console.WriteLine("Day of Month     : " & current.Day)                              ' Print output to console
        Console.WriteLine("Day of Week      : " & current.DayOfWeek.ToString())             ' Print output to console
        Console.WriteLine("Added 10 Days    : " & current.AddDays(10).ToShortDateString())  ' Print output to console
    End Sub
End Module
