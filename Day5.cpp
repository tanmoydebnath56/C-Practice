#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
	vector<int> S;
	int n,e;
	cout<<"Enter the number of elements in the array: ";
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>e;
		S.push_back(e);  //Entering the elements in the vector.
	}
	cout<<"\n";
	for(int j=0;j<n;j++){
		cout<<S.at(j)<<" "; //Printing the vector.
	}
	return 0;
}


