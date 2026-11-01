<%@ page language="java" contentType="text/html; charset=UTF-8" %>
<!DOCTYPE html>
<html>
<body>
    <%
        int n = 10;
        out.println("<h3>Numbers 1 to " + n + ":</h3>");
        for (int i = 1; i <= n; i++) {
            out.print(i + " ");
        }
    %>
</body>
</html>
