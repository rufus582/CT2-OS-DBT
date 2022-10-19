import java.sql.*;

public class JDBCConnection {

	public static void main(String[] args) throws SQLException, ClassNotFoundException {
		String driver = "com.mysql.cj.jdbc.Driver";
		String url = "jdbc:mysql://localhost:3306/student";
		String uName = "root";
		String pass = "rufus5802";
		
		Class.forName(driver);
		Connection con = DriverManager.getConnection(url, uName, pass);
		Statement st = con.createStatement();

		//CREATE TABLE
		st.execute("create table stud2(id int, name varchar(20), age int)");
		
		//INSERTING VALUES
		for(int i=1; i<=5; i++) {
			st.executeUpdate("insert into stud2 values("+(100+i)+", 'Stud "+i+"', 18)");
		}
		
		System.out.println("Inserted values, now displaying them:");
		
		//RETRIEVING VALUES FROM DATABASE
		ResultSet rs = st.executeQuery("select * from stud2");
		while(rs.next()) {
			System.out.println(rs.getString(2));
		}
		
		//CLOSE CONNECTION
		st.close();
		con.close();
	}
}
