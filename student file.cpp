#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int main(){
    string Name;
    int id;
    int Marks;
    cout<<"enter the name of the student";
    getline(cin,Name);
    cout<<"enter the students id number";
    cin>>id;
    cout<<"enter the students marks";
    cin>>Marks;
    
    ofstream file("student_details.txt",ios::app);
    if(!file){
        cerr<<"error:while trying to open the file";
        return 1;
    }
    
    file<<left<<setw(15)<<"Name"<<setw(10)<<"id:"<<setw(10)<<"Marks"<<endl;
    
    file<<left<<setw(15)<<"Name"<<setw(10)<<"id"<<setw(10)<<"marks"<<endl;
    
    file.close();
    cout<<"students details was saved successfully";
    return 0;
    
    
    
    
    
}