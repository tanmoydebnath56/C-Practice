#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n,i,j,sum1=0,sum2=0,diff=0;
	cin>>n;
	int a[n][n];
	cout<<"Enter the array";
	for(i=0;i<n;i++){ 			
		for(j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	for(i=0;i<n;i++){			
		for(j=0;j<n;j++){
			if(i==j)
			{
			cout<<a[i][j]<<endl;
			sum1+=a[i][j];}	
		}
	}cout<<"Principle Diagonal sum"<<sum1<<endl;
	for(i=0;i<n;i++){			
		cout<<a[n-1-i][i]<<endl;
		sum2+=a[n-1-i][i];
	}cout<<"Secondary diagonal"<<sum2<<endl;
	diff=abs(sum1-sum2);
	cout<<diff;
	return 0;

}
