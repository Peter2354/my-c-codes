#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    const int responsesize=40;
    const int frequencysize=10;
        //placing array responses in the array

        int  responses[responsesize]={1, 2, 6, 4, 8, 5, 9, 7, 8,
        10, 1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7,
        5, 6, 6, 5, 6, 7, 5, 6, 4, 8, 6, 8, 10 };

        //initialize frquency counters to zero
    

                int frequency[frequencysize]={};
                // for each answer, select responses element and use that value 
            // as frequency subscript to determine element to increment
            for (int answer=0;answer<responsesize;answer++){
            frequency[responses[answer] ]++;}
  
                    cout<<"rating"<<setw(17)<<"frequency"<<endl;
                    
                    //output each array element value
                    for(int rating=1;rating<frequencysize;rating++)
                    
                    cout<<setw(6)<<rating<<setw(17)<<frequency[rating]<<endl;
                    
                    return 0;}

