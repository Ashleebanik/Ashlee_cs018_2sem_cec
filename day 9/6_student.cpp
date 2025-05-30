#include<iostream>
#include<fstream>
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
    Student s;
    ofstream fout("student.dat",ios::binary);
    s.input();
    fout.write((char *)&s,sizeof(s));
    fout.close();
    Student s1;
    ifstream fin("student.dat",ios::binary);
    fin.read((char *)&s1,sizeof(s1));
    fin.close();
    s.display();
    
}

