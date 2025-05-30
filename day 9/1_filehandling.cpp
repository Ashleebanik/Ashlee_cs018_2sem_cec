#include<iostream>
#include<fstream>
#include<sstream>

using namespace std;
int main(){
    ofstream fout;
    fout.open("1_filehandling.txt");
    fout<<"Hello World";
    fout.close();
    //cout<<"File is closed"<<endl;
    ifstream fin;
    fin.open("1_filehandling.txt");
    string line;
    while(getline(fin,line)){
        cout<<line<<endl;

    }
fin.close();

}