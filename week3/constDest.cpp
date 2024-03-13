#include<iostream>
using namespace std;
class Student
{
public:
string fullName;
int rollNum;
double semPercentage;
string collegeName;
int collegeCode;
Student()
{
cout<<"Student class initialized!!\nIam a student\n";
}
~Student(){}
};
int main()
{
Student likki;
cout<<"Enter your name : ";
getline(cin,likki.fullName);
cout<<"Enter your roll number : ";
cin>>likki.rollNum;
cout<<"Enter your sem percentage : ";
cin>>likki.semPercentage;
cout<<"Enter your college name : ";
cin>>likki.collegeName;
cout<<"Enter your college code : ";
cin>>likki.collegeCode;
cout<<"Name : "<<likki.fullName<<endl;
cout<<"RollNum : "<<likki.rollNum<<endl;
cout<<"SemPercentage : "<<likki.semPercentage<<endl;
cout<<"CollegeName : "<<likki.collegeName<<endl;
cout<<"CollegeCode : "<<likki.collegeCode<<endl;
return 0;
}
