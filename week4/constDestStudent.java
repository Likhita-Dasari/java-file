import java.util.Scanner;
class Student019
{
public
String fullName;
int rollNum;
double semPercentage;
String collegeName;
int collegeCode;
Student019()
{
System.out.println("Student class is created successfully!!\nIam a student\n");
}
protected void finalize() throws Throwable
{
System.out.println("The class is finalized\n");
}
}
public class Student
{
public static void main(String[] args)
{
Student019 likki=new Student019();;
Scanner input=new Scanner(System.in);
System.out.print("Enter your sweet name : ");
likki.fullName=input.nextLine();
System.out.print("Enter your rollNumber : ");
likki.rollNum=input.nextInt();
System.out.print("Enter your semPercentage : ");
likki.semPercentage=input.nextDouble();
input.nextLine();
System.out.print("Enter your collegeName : ");
likki.collegeName=input.nextLine();
System.out.print("Enter your collegeCode : ");
likki.collegeCode=input.nextInt();
System.out.print("Name : "+likki.fullName+"\n");
System.out.print("RollNumber : "+likki.rollNum+"\n");
System.out.print("SemPercentage : "+likki.semPercentage+"\n");
System.out.print("CollegeName : "+likki.collegeName+"\n");
System.out.print("CollegeCode : "+likki.collegeCode+"\n");
input.close();
}
}
