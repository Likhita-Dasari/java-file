//Demonstrate Operator overlaoding in C++.

#include<iostream>
using namespace std;
class opeOverLoad{
    public:
    int real;
    int img;
    opeOverLoad(int real = 0,int img = 0){
        this->real = real;
        this->img = img;
    }
    opeOverLoad operator +(opeOverLoad obj){
        opeOverLoad tempobj;
        tempobj.real = real + obj.real;
        //cout<<"tempobj.real="<< tempobj.real<<endl;
        tempobj.img = img + obj.img;
        //cout<<"tempobj.img="<<tempobj.img<<endl;
        return tempobj;
    }
};

int main(){
    int a ,b,c,d;
    cout<<"Enter the real(a) value:"<<endl;
    cin>>a;
    cout<<"Enter the imginary(b) value:"<<endl;
    cin>>b;
    cout<<"Enter the real(c) value: "<<endl;
    cin>>c;
    cout<<"Enter the imaginary value: "<<endl;
    cin>>d;
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
    opeOverLoad operator1(a,b),operator2(c,d);
    opeOverLoad result(0,0);
    result = operator1 + operator2;
    cout<<"the result of addion by using operator overloading: "<<result.real<<"+i"<<result.img<<endl;
}
