package bclass;

public class Student 
{
	private String name;
	private String id;
	private String major;
	private double gpa;
	public void setMajor(String m)
	{
		major=m;
	}
	public double getGPA()
	{
		setMajor("");
		return gpa;
	}
//	public static void main(String[] args) 
//	{
//	}
}
