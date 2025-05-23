#include<iostream>
using namespace std;
class student{
    string name;
    string usn;
    int marks;
    char cn;
   public: student(string name,string usn, int marks,char cn){
        cout<<"Constructor called automatically"<<endl;
        this -> name=name;
        this -> usn=usn;
        this -> marks=marks;
        this-> cn=cn;
    }
    void display(){
        cout<<"Student name: "<<this -> name<<endl;
        cout<<"USN is: "<<usn<<endl;
        cout<<"Marks is: "<<marks<<endl;
        cout<<"class name is: "<<cn<<endl;
        if (marks>90 && marks <=100){
            cout<<"a+"<<endl;
        }
        else if (marks>80&&marks<=90){
            cout<<"a"<<endl;
        }
        else if(marks>70&&marks<=80){
            cout<<"b+"<<endl;
        }
        else if(marks>60&&marks<70){
            cout<<"b"<<endl;
        }
        else if(marks>50&&marks<60){
            cout<<"c+"<<endl;
        }
        else if(marks>40&&marks<50){
            cout<<"c"<<endl;
        }
        else{
            cout<<"f"<<endl;
        }
    }
};
int main(){
    student s1("Maya","CE123",77,'F');
    s1.display();
    return 0;

}