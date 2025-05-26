#include<iostream>
using namespace std;
int main() {
	int x,y,z,minimum,intermidiate,maximum;
	cout<<"enter x,y,z";
	cin>>x>>y>>z;
	if(x>=y&&x>=z) {
		maximum=x; 
		if(y>=z) {
		minimum=z;
		intermidiate=y;}
	else{
	    minimum=y;
	    intermidiate=z;
		}}
    else if(y>=x&&y>=z){
		maximum=y;
	if(x>=z){
		minimum=z;
		intermidiate=x;}
	
	else{
		minimum=x;
		intermidiate=z;	}
}
	else if(z>=x&&z>=y){
		maximum=z;
		 if(x>=y){
			minimum=y;
			intermidiate=x;
	}
	     else{
		minimum=x;
		intermidiate=y;}
		}
	
	cout<<"sort in order"<<minimum<<"  "<<intermidiate<<"  "<<maximum;
	return 0;
		
	
	
}
