import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;

class JdbcSelectDemo {
    public static void main(String[] args) {
        try {
            Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/college_practice", "root", "");  // Calculate and assign value
            Statement stmt = con.createStatement();                                                                    // Calculate and assign value
            ResultSet rs = stmt.executeQuery("SELECT * FROM employees");                                               // Calculate and assign value
            while (rs.next()) {                                                                                        // Iterate while condition holds
                System.out.println("Emp: " + rs.getInt(1) + " - " + rs.getString(2));                                  // Display emp
            }
            con.close();
        } catch (Exception e) {
            System.out.println("Database demo exception: " + e.getMessage());                                          // Display database demo exception
        }
    }
}
