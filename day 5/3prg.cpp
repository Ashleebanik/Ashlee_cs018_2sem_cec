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
class employee:public Person
{
    int wrk_hr;
public:
     employee(string name,int age,int weight,int wrk_hr):Person(name,age,weight),wrk_hr(wrk_hr)
     {
        cout<<"employee constructor"<<endl;
     }
     void display()
     {
        cout<<"employee details:"<<endl;
        cout<<"employee name:"<<name<<endl;
        cout<<"employee age:"<<age<<endl;
        cout<<"employee weight:"<<weight<<endl;
        cout<<"employee working hour:"<<wrk_hr<<endl;
     }
};
int main()
{
    employee e1("obn",25,50,8);
    e1.display();
}
