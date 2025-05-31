#include<iostream>
using namespace std;
class irctc{
    public:
    /*string name;
    long long aadhar;
    string pw;
    string pw1;
    long phno;
    string email;*/
    string name[1];
    string pw[1];
    string pw1[1];
    string email[1];
    long long aadhar[1];
    long phno[1];
    public:
     void display(){
        cout<<"You have been registered successfully."<<endl;
        cout<<"Details: "<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Phone number: "<<phno<<endl;
        cout<<"Email: "<<email<<endl;

     }
     void input(){
        for(int i=0;i<1;i++){
            //do{
                
            cout<<"Enter the name: "<<endl;
            cin>>name[i];
            cout<<"Enter Aadhar number: "<<endl;
            cin>>aadhar[i];
            cout<<"Enter the phone number: "<<endl;
            cin>>phno[i];
            cout<<"Enter the email id: "<<endl;
            cin>>email[i];
            cout<<"Enter a password: "<<endl;
            cin>>pw[i];
            cout<<"Confirm password: "<<endl;
            cin>>pw1[i];
            if(pw[i]==pw1[i]){
                display();
            }
            else{
                cout<<"Password incorrect!Try again."<<endl;
            }
           // }while (pw[i]!=pw1[i]);
        }
    
     }
     void login(){
        string name1[1];
        string pw2[1];
        for(int i=0;i<1;i++){
           // do{
            cout<<"Enter the name: "<<endl;
            cin>>name1[i];
            cout<<"Enter the password: "<<endl;
            cin>>pw2[i];
            if(name1[i]==name[i] && pw2[i]==pw[i]){
                cout<<"Logged in successfully."<<endl;
            }
            else{
                cout<<"user name or password incorrect."<<endl;
            }//} while(name1[i]!=name[i] || pw2[i]!=pw[i]);
        }
    }
    int del(){
        for(int i;i<1;i++){
        
            cout<<"Enter the user name: "<<endl;
            cin>>name[i];
            delete[] name;
            return 0;
        }
    }
};  
int main(){
    irctc i;
    int n;
    do{
        cout<<"Enter the option: \n 1. create user id,\n 2.Search id, \n 3.Update user id, \n 4. Delete id, \n 5. Exit"<<endl;
        cin>>n;
        switch (n)
        {
            case 1:
            {
                i.input();
                i.login();
                break;
            }
        
            default:
            {
                cout<<"Try again!"<<endl;
            }
                break;
        }
    }while(n!=6);
}