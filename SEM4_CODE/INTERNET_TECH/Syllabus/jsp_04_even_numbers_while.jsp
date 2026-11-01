<%@ page language="java" contentType="text/html; charset=UTF-8" %>
<!DOCTYPE html>
<html>
<body>
    <h3>Even Numbers Using While:</h3>
    <%
        int i = 2;
        while (i <= 20) {
            out.print(i + " ");
            i += 2;
        }
    %>
</body>
</html>
