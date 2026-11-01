<%@ page language="java" contentType="text/html; charset=UTF-8" %>
<!DOCTYPE html>
<html>
<body>
    <%
        int n = 5;
        for (int i = 1; i <= n; i++) {
            out.println("<p>Hello World (" + i + ")</p>");
        }
    %>
</body>
</html>
