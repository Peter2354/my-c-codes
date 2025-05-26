#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    //create a text file
    ofstream mywritefile("filename.txt");
    //write to the file
    mywritefile<<"files can be tricky but it is fun engough! ";
    //close file
    mywritefile.close();
    
    //create a text file that is used to output text file
    string mytext;
    //read from the text file
    ifstream myreadfile("filename.txt");
    //use a while loop together with getline to getfile and read line byline
    
    while(getline(myreadfile,mytext)){
        
        cout<<mytext;
    }
    myreadfile.close();
    
    
}