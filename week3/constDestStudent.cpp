
#include<iostream>
using namespace std;
class Student
{
public:
Student()
{
string collegeName = "MVGR";
int collegeCode=33;
cout<<"CollegeName : "<<collegeName<<endl;
cout<<"CollegeCode: "<<collegeCode<<endl;
}
Student(string fullName, double semPercentage)
{
cout<<"FullName : "<<fullName<<endl;
cout<<"SemPercentage : "<<semPercentage<<endl;
}
~Student(){}
};
int main()
{
Student likki;
string name;
float val;
cout<<"Enter your name : ";
getline(cin,name);
cout<<"Enter your sem percentage : ";
cin>>val;
Student likki01(name,val);
return 0;
}
