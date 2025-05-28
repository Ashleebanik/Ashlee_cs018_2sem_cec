#include<iostream>
using namespace std;
class Person
{
protected:
    string name;
    int age;
    int weight;
public:
     Person(string name,int age,int weight):name(name),age(age)
     {
        cout<<"constructor is called"<<endl;
        this->weight=weight;
     }
};
class student:public Person
{
    int roll_num;
public:
     student(string name,int age,int weight,int roll_num):Person(name,age,weight),roll_num(roll_num)
     {
        cout<<"Student constructor"<<endl;
     }
     void display()
     {
        cout<<"Student details:"<<endl;
        cout<<"Student name:"<<name<<endl;
        cout<<"Student age:"<<age<<endl;
        cout<<"Student weight:"<<weight<<endl;
        cout<<"Student roll number:"<<roll_num<<endl;
     }
};
int main()
{
    student s1("saanu",34,45,24);
    s1.display();
}
