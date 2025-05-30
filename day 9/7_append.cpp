#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;
int main(){
    ofstream first("file1.txt");
    first<<"Hello World!"<<endl;
    first.close();
    ofstream f("file1.txt",ios::app);
    f<<"Hello World!"<<endl;
    f.close();
    ifstream fin("file1.txt");
   string line;
    while(getline(fin,line)){
    cout<<line<<endl;}
    fin.close();
    return 0;
}