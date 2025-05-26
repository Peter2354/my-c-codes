#include<iostream>
using namespace std;
int main(){
    try{
        int age=15;
        
        if(age>=18){
            cout<<"access -granted you are an adult.";
            
        }
        else{
            throw 505;
        }
    }
        catch(int mynum){
            cout<<"access-denied you are underage.";
            cout<<"\nError number:"<<mynum<<"\n";
        }
        return 0;
    }