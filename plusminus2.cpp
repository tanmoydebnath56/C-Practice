#include<iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	float pos=0,neg=0,zero=0;
	int a[n];
	float x,y,z;
	
	cin>>n;
	
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
					
					}	}
					
	x=pos/n;
	y=neg/n;
	z=zero/n;
	cout<<x<<endl;
    cout<<y<<endl;
    cout<<z<<endl;

	return 0;
	
}
