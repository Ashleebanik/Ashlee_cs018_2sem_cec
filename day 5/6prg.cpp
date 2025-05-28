#include<iostream>
using namespace std;
class person
{
    string name;
    int age;
public:
    person(string name,int age):name(name),age(age)
    {

    }
    void display_person()
    {
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
    }
};
class student:public person

{
    int roll_num;
public:
     student(string name,int age,int roll_num):person(name,age),roll_num(roll_num)
     {

     }
     void display_student()
     {
        cout<<"student details:"<<endl;
        display_person();
        cout<<"roll num:"<<roll_num<<endl;
     }
};
class student:public person

{
    int roll_num;
public:
     student(string name,int age,int roll_num):person(name,age),roll_num(roll_num)
     {

     }
     void display_student()
     {
        cout<<"student details:"<<endl;
        display_person();
        cout<<"roll num:"<<roll_num<<endl;
     }
};
class student:public person

{
    int roll_num;
public:
     student(string name,int age,int roll_num):person(name,age),roll_num(roll_num)
     {

     }
     void display_student()
     {
        cout<<"student details:"<<endl;
        display_person();
        cout<<"roll num:"<<roll_num<<endl;
     }
};
class student:public person

{
    int roll_num;
public:
     student(string name,int age,int roll_num):person(name,age),roll_num(roll_num)
     {

     }
     void display_student()
     {
        cout<<"student details:"<<endl;
        display_person();
        cout<<"roll num:"<<roll_num<<endl;
     }
};
class teacher:public person
{
    int salary;
public:
     teacher(string name,int age,int salary):person(name,age),salary(salary)
     {

     }
     void display_teacher()
     {
        cout<<"teacher details:"<<endl;
        display_person();
        cout<<"salary:"<<salary<<endl;
     }
};
int main()
{
    teacher
}
}