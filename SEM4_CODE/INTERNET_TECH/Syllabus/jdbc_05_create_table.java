import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.Statement;

class JdbcCreateTableDemo {
    public static void main(String[] args) {
        try {
            Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/college_practice", "root", "");          // Calculate and assign value
            Statement stmt = con.createStatement();                                                                            // Calculate and assign value
            String sql = "CREATE TABLE IF NOT EXISTS student_records (roll INT PRIMARY KEY, name VARCHAR(50), marks DOUBLE)";  // Initialize variable
            stmt.executeUpdate(sql);
            System.out.println("Table student_records created successfully.");                                                 // Display output result
            con.close();
        } catch (Exception e) {
            System.out.println("Table creation demo exception: " + e.getMessage());                                            // Display table creation demo exception
        }
    }
}
