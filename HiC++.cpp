#include<stdlib.h>
#include<conio.h>
#include<process.h>
void main(){
	int a,b,c;
	cout<<"Enter the operation
	1. Addition
	2. Subtraction
	3. Multiplication
	4. Division";
	char ch;
	if(ch==1){
		c=a+b;
		cout<<c;
	}
	else if(ch==2){
		if(a>b){
			c=a-b;
			cout<<c;
		}else
		{ c=b-a;
		cout<<c;
		
	}	else if(ch==3){
		c=a*b;
		cout<<c;
	}		else if(ch==4){
		c=(a/b)||(b/a);
		cout<<c;
	} 			else {
		cout<<"Try Again";
	}
}}
