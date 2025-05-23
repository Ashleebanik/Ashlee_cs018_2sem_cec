#include<iostream>
#include<string>
using namespace std;
int main(){
    int age=0;
    float marks=0;
    string name;
    char gender;
    cout<<"Enter the name of the student"<<endl;
    //cin>> name;
    getline(cin,name);
    cout<<"Enter the gender of the student"<<endl;
    cin>> gender;
    cout<<"Enter the age of the student"<<endl;
    cin>> age;
    cout<<"Enter the marks of the student"<<endl;
    cin>> marks;
    cout<<"Student details:"<<endl;
    cout<<"Name:"<<name<<endl;
    cout<<"Gender:"<<gender<<endl;
    cout<<"Age:"<<age<<endl;
    cout<<"Marks:"<<marks<<endl;

}