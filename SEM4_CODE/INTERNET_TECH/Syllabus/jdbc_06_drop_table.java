import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.Statement;

class JdbcDropTableDemo {
    public static void main(String[] args) {
        try {
            Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/college_practice", "root", "");  // Calculate and assign value
            Statement stmt = con.createStatement();                                                                    // Calculate and assign value
            String sql = "DROP TABLE IF EXISTS student_records";                                                       // Initialize variable
            stmt.executeUpdate(sql);
            System.out.println("Table student_records dropped successfully.");                                         // Display output result
            con.close();
        } catch (Exception e) {
            System.out.println("Table drop demo exception: " + e.getMessage());                                        // Display table drop demo exception
        }
    }
}
