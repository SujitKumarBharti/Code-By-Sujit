import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.Statement;

class JdbcInsertDemo {
    public static void main(String[] args) {
        try {
            Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/college_practice", "root", "");                     // Calculate and assign value
            Statement stmt = con.createStatement();                                                                                       // Calculate and assign value
            String sql = "INSERT INTO employees (employee_id, employee_name, job_title, salary) VALUES (10, 'Aakash', 'Tester', 35000)";  // Initialize variable
            int rows = stmt.executeUpdate(sql);                                                                                           // Initialize variable
            System.out.println("Rows inserted: " + rows);                                                                                 // Display rows inserted
            con.close();
        } catch (Exception e) {
            System.out.println("Database demo exception: " + e.getMessage());                                                             // Display database demo exception
        }
    }
}
