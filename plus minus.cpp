#include<iostream>
using namespace std;
int main(){
	int n,i;
	float pos=0,neg=0,zero=0;
	int a[n];
	float x,y,z;
	cout<<"Enter the size of array\n";
	cin>>n;
	cout<<"Enter the array\n";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		if(a[i]>0){
			pos++;
			
		}else if(a[i]<0){
			neg++;
			
		}	  else if(a[i]==0){
					zero++;
					
					}else cout<<".";	}
					cout<<pos<<endl;
					cout<<neg<<endl;
					cout<<zero<<endl;
	x=pos/n;
	y=neg/n;
	z=zero/n;
	cout<<x<<y<<z;

	return 0;
	
}
