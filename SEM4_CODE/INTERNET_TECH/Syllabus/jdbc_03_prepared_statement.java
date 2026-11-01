import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;

class JdbcPreparedInsertDemo {
    public static void main(String[] args) {
        try {
            Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/college_practice", "root", "");  // Calculate and assign value
            String sql = "INSERT INTO employees (employee_id, employee_name, job_title, salary) VALUES (?, ?, ?, ?)";  // Initialize variable
            PreparedStatement pstmt = con.prepareStatement(sql);                                                       // Calculate and assign value
            pstmt.setInt(1, 11);
            pstmt.setString(2, "Sunita");
            pstmt.setString(3, "Developer");
            pstmt.setDouble(4, 55000);
            int rows = pstmt.executeUpdate();                                                                          // Initialize variable
            System.out.println("Rows inserted with PreparedStatement: " + rows);                                       // Display output result
            con.close();
        } catch (Exception e) {
            System.out.println("Database demo exception: " + e.getMessage());                                          // Display database demo exception
        }
    }
}
