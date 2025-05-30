#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;
int main(){
    ofstream a("3-file.txt");
    a.put('h');
    a.close();
    ifstream b("3-file.txt");
    char v1;
    b.get(v1);
    b.close();
    
    cout<<"The value is: "<<v1<<endl;

}