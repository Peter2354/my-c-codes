#include<iostream>
using namespace std;
//declaring the function to get age
void agecheck(int age){
if (age>=18){
    cout<<"adult";
}else{
    cout<<"minor";
}
}

int main(){
    int age;

    cout<<"enter your age";
    cin>>age;   //geting age from the user
    cout<<"the age is:"<<age<<"\n"; //output
     
    agecheck(age);


    return 0;

}