import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;

class JdbcResultSetDemo {
    public static void main(String[] args) {
        try {
            Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/college_practice", "root", "");  // Calculate and assign value
            Statement stmt = con.createStatement(ResultSet.TYPE_SCROLL_INSENSITIVE, ResultSet.CONCUR_READ_ONLY);       // Calculate and assign value
            ResultSet rs = stmt.executeQuery("SELECT employee_id, employee_name FROM employees");                      // Calculate and assign value
            if (rs.first()) {                                                                                          // Check condition
                System.out.println("First row: " + rs.getString("employee_name"));                                     // Display first row
            }
            if (rs.last()) {                                                                                           // Check condition
                System.out.println("Last row: " + rs.getString("employee_name"));                                      // Display last row
            }
            con.close();
        } catch (Exception e) {
            System.out.println("ResultSet demo exception: " + e.getMessage());                                         // Display resultset demo exception
        }
    }
}
