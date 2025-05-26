#include<iostream>
using namespace std;
int cubefy(int x){
    int result;
    if(x%2==0){
        result=x*x;
    }
    else{
        result=x*x*x;
    }
    return result;
    }
    int main(){
        int x;
        cout<<"Enter a number ";
        cin>>x;
        cout<<"the result is "<<cubefy(x)<<"\n";
        return 0;

    }
