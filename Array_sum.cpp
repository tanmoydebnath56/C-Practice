#include<iostream>
using namespace std;
long sum(int n,long ar[]){
	long sum=0;
	int i;
	for(i=0;i<n;i++)
	sum+=ar[i];
	return sum;
}
int main(){
	int n;
	long SUM=0;
	long ar[n];
	cout<<"Enter the size of the array\n";
	cin>>n;
	cout<<"Enter the array\n";
	for(int i=0;i<n;i++)
	cin>>ar[i];
	SUM=sum(n,ar);
	cout<<sum;
}
