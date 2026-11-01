Imports System
Imports System.Threading

Module ThreadingDemo
    Sub WorkerTask()
        Console.WriteLine("Background thread running...")  ' Display console output
    End Sub

    Sub Main()
        Dim t As New Thread(AddressOf WorkerTask)          ' Declare variable
        t.Start()
        t.Join()
        Console.WriteLine("Main thread completed.")        ' Display console output
    End Sub
End Module
