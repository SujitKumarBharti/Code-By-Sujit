<%@ page language="java" contentType="text/html; charset=UTF-8" %>
<!DOCTYPE html>
<html>
<body>
    <h3>Fibonacci Series (first 10 terms):</h3>
    <%
        int a = 0, b = 1;
        for (int k = 0; k < 10; k++) {
            out.print(a + " ");
            int temp = a + b;
            a = b;
            b = temp;
        }
    %>
</body>
</html>
