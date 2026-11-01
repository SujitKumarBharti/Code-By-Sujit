<%@ page language="java" contentType="text/html; charset=UTF-8" %>
<!DOCTYPE html>
<html>
<body>
    <h3>Even Numbers from 1 to 20:</h3>
    <%
        for (int i = 2; i <= 20; i += 2) {
            out.print(i + " ");
        }
    %>
</body>
</html>
