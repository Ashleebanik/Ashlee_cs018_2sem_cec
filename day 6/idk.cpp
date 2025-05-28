#include<iostream>
using namespace std;
class Person{
    string name;
    int age;
    string gen;//gender
    public:
    Person(){
        name="";
        age=0;
        gen="";
    }
    Person(string name,int age,string gen){
        this->name=name;
        this->gen=gen;
        this->age=age;
    }
    string getname(){
        return name;
    }
    int getage(){
        return age;
    }
    string getgen(){
        return gen;
    }
    void setname(){
        this-> name=name;
    }
    void setage(){
        this-> age=age;
    }
    void setgender(){
        this-> gen=gen;
    }
    void input(){
        cout<<"Enter the name"<<endl;
        cin>>name;
        cout<<"Enter the age"<<endl;
        cin>>age;
        cout<<"Enter the gender"<<endl;
        cin>>gen;

    }
    void display(){
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Gender:"<<gen<<endl;
    }
};
class student:public Person
{
    private:
    int rn;//roll number
    string cg;//class grade
    string sec;//section
    
    public:
    student(string name, int age,char gen,int rn,string cg, string sec ): Person(name,age,gen),rn(rn),cg(cg),sec(sec)
    {
         cout << "Student Constructor" << endl;
    }
    void studentinput(){
        
        cout << " Roll Number: " <<  endl;
        cin>>rn;
        cout<<"class grade:"<<endl;
        cin>>cg;
        cout<<"Section:"<<endl;
        cin>>sec;
     }
     void studentdisplay(){
        cout << "Student details: " << endl;
        cout << "Student Name: " <<endl;
        display();
        cout << "Student Age: " << endl;
        display();
        cout << "Student Gender: " <<  endl;
        display();
        cout << "Student Roll Number: " << rn << endl;
        cout << "Student Class Grade: " << cg << endl;
        cout << "Student Section: " << sec << endl; } 
          
};


class teacher:public Person
{
    private:
    int eid;
    string sub;
    string depart;
    
    public:
    teacher(string name, int age,char gen,int eid,string sub, string depart ): Person(name,age,gen),eid(eid),sub(sub),depart(depart)
    {
         cout << "Teacher Constructor" << endl;
    }
    void teacherinput(){
        
        cout << " Employee id :" << endl;
        cin>>eid;
        cout<<"Subject:"<<endl;
        cin>>sub;
        cout<<"Department: "<<endl;
        cin>>depart;
     }
     void teacherdisplay(){
        cout << "Teacher details: " << endl;
        cout << " Teacher Name: " << endl;
        display();
        cout << "Teacher Age: " <<  endl;
        display();
        cout << "Teacher Gender: " << endl;
        display();
        cout << "Teacher employee id: " << eid << endl;
        cout << "Teacher subject: " << sub << endl;
        cout << "Teacher department: " << depart << endl; } 
          
};
int main(){
    student s1;
    teacher t1;
    s1.studentinput();
    s1.studentdisplay();
    t1.teacherinput();
    t1.teacherdisplay();
    return 0;
}
