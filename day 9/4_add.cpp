#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the two numbers: "<<endl;
    cin>>a>>b;
    int res=a+b;
    ofstream add("4_Add.txt");
    add<<"The sum of "<<a<<" and "<<b<<" is: "<<res<<endl;
    add.close();
    ifstream fin("4_Add.txt");
    string line;
    while(getline(fin,line)){
        cout<<line<<endl;
    }
    fin.close();
}
