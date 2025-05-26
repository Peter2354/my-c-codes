#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
double hypotenuse(double,double);

int main(){
    double side1,side2;
    
    cout<<setiosflags(ios::fixed|ios::showpoint);
    
    
    for(int i=1;i<=3;++i){
        cout<<"enter the two sides of a triangle";
    
       cin>> side1 >> side2;
        cout<<"hypotenuse: "<<setprecision(1)
            <<hypotenuse(side1,side2) <<endl;
    }
            return 0;
        
    }
    double hypotenuse(double s1,double s2)
    {
    return sqrt(s1*s1+s2*s2);}

