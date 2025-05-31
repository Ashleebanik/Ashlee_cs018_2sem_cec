#include<iostream>
using namespace std;
class irctc{
    public:
    string name[10];
    string pw[10];
    string pw1[10];
    string email[10];
    long long aadhar[10];
    long phno[10];
    public:
     void display(){
        for(int i=0;i<1;i++){
        cout<<"You have been registered successfully."<<endl;
        cout<<"Details: "<<endl;
        cout<<"Name: "<<name[i]<<endl;
        cout<<"Phone number: "<<phno[i]<<endl;
        cout<<"Email: "<<email[i]<<endl;
        }
     }
     void input(){
        for(int i=0;i<1;i++){
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
            do{
            cout<<"Confirm password: "<<endl;
            cin>>pw1[i];
            if(pw[i]==pw1[i]){
                display();
            }
            else{
                cout<<"Password incorrect!Try again."<<endl;
            }}while(pw[i]!=pw1[i]);
           
        }
    
     }
    void login(){
        string name1[1];
        string pw2[1];
        for(int i=0;i<1;i++){
            do {
                cout<<"Enter the name: "<<endl;
                cin>>name1[i];
                cout<<"Enter the password: "<<endl;
                cin>>pw2[i];
                if(name1[i]==name[i] && pw2[i]==pw[i]){
                    cout<<"Logged in successfully."<<endl;
                }
                else{
                    cout<<"user name or password incorrect."<<endl;
                }
            } while(name1[i]!=name[i] || pw2[i]!=pw[i]);
        }
    }
    void update(){
        for(int i=0;i<1;i++){
            cout<<"Select user name: "<<endl;
            cin>>name[i];
            cout<<"Enter the new password: "<<endl;
            cin>>pw[i];
            cout<<"Enter the new email id:  "<<endl;
            cin>>email[i];
            cout<<"Enter the new phone number: "<<endl;
            cin>>phno[i];
        }
    }
    
};  
int main()
{
    irctc i;
    int n;
    while(n>0)
    {
        cout<<"Enter the option: \n 1. create user id,\n 2.update id,  \n 3. Exit"<<endl;
        cin>>n;
        switch (n)
        {
            case 1:
            {
                i.input();
                i.login();
                break;
            }
            case 2:
            {
                i.login();
                i.update();
                i.display();
                cout<<"Updated!"<<endl;
                break;
            }
            case 3:
            {
                cout<<"Exited"<<endl;
                exit(0);
                break;
            }
        
            default:
            {
                cout<<"Try again!"<<endl;
                break;
            }
             
        }
    }
}