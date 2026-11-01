<%@ page language="java" contentType="text/html; charset=UTF-8" %>
<!DOCTYPE html>
<html>
<body>
    <%
        for (int size = 1; size <= 10; size++) {
            out.println("<font size='" + size + "' color='green'>JSP Programming</font><br>");
        }
    %>
</body>
</html>
