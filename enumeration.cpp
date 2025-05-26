#include<iostream>
using namespace std;
    enum level{
        low=1,
        medium,
        high
        
    };
    int main(){
        enum level myvar=medium;
        switch (myvar)
        {case 1:
        cout<<"low level";
        break;
        
            case 2:
            cout<<"medium level";
            break;
        
                    case 3:
                    cout<<"high level";
                    break;}
            
                return 0;
}