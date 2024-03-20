//Demonstrate method/function overlaoding in C++.
#include<iostream>
using namespace std;

class overload{
    public:
    int a,b,c;
    double d,e,f;
    char char1,char2;
    void addAndConcatinate(int a, double d , int b){
        cout<<"adding of the int and double and int: "<<a + d + b<<endl;
    }
    void addAndConcatinate(char char1,char char2){
        cout<<"concatinating the two characters: "<<char1<<char2<<endl;
    }
    void addAndConcatinate(double e , int c ,double f){
        cout<<"adding of double and int and double: "<<e+c+f<<endl;
    }

};

int main(){
    int a,b,c;
    double d,e,f;
    char char1,char2;
    cout<<"enter three integers values: "<<endl;
    cin>>a>>b>>c;
    cout<<"enter three double values: "<<endl;
    cin>>d>>e>>f;
    cout<<"Enter two characters:"<<endl;
    cin>>char1>>char2;
    overload obj;
    obj.addAndConcatinate(a,d,b);
    obj.addAndConcatinate(char1,char2);
    obj.addAndConcatinate(e,c,f);
}
