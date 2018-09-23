#include<iostream>


using namespace std;

int main(){
	int a,b,c;
	char ch;
	cout<<"Enter the number A\n";
	cin>>a;
	cout<<"Enter the number B\n";
	cin>>b;
	cout<<"Enter the character for doing the operations\n";
	cin>>ch;
	switch(ch){
		case '+': c=a+b; cout<<"Value of c\n"<<c; break;
		case '-': c=a-b; cout<<"Value of c\n"<<c; break;
		case '*': c=a*b; cout<<"Value of c\n"<<c; break;
		case '/': c=a/b; cout<<"Value of c\n"<<c; break;
		default: cout<<"Try again";
	}
	
	
system["PAUSE"];	
}
