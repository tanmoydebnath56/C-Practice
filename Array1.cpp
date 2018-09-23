#include<iostream>
using namespace std;

int main(){
	int n,i,j,sum=0;
	cin>>n;
	int a[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	for(i=0;i<n;i++){
		cout<<a[n-1-i][i]<<endl;
		sum+=a[n-1-i][i];
	}cout<<sum<<endl;
	return 0;

}
