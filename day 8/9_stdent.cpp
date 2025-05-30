#include<iostream>
using namespace std;
class Student{
    private:
    string name;
    int rn; // roll number
    public:
    
    void input(){
       
        cout<<"Enter the name of the student: "<<endl;
        cin>>name;
        cout<<"Enter the roll number of the student: "<<endl;
        cin>>rn;
    }
    void display()
    {
       cout<<"Name: "<<name<<endl;
       cout<<"Roll number: "<<rn<<endl;

    }
};
int main(){
    int size=3;
    Student *stud=new Student[size];
    
    for(int i=0;i<3;i++){
        stud[i].input();
        stud[i].                 
        display();
        
    }
    return 0;
}