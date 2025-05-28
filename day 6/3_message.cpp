#include<iostream>
using namespace std;
class message{
    
    public:
    void sendmessage(string mail,string m1){
       
        cout<<"Message: "<<m1<<endl;
        cout<<"The message is send to "<<mail<<endl;
    }
    void sendmessage(long phno,int otp,string m2){
        
        cout<<"OTP : "<<otp<<endl;
        cout<<"Message: "<<m2<<endl;
        cout<<"The phone number is: "<<phno<<endl;

    }
};
int main(){
    message m;
    string mail;
    long phno;
     cout<<"Enter the email"<<endl;
     cin>>mail;
    cout<<"Enter the phone number "<<endl;
    cin>>phno;
    m.sendmessage(mail,"Message sent");
    m.sendmessage(phno,1234,"Message is sent to the phone");
}