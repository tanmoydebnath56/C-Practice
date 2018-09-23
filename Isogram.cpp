#include <bits/stdc++.h>
#include<string.h>

using namespace std;
string tocheckerios(string str){
	int len=str.length();
	for (int i=0;i<len;i++){
		str[i]=tolower(str[i]);
	}
	sort(str.begin(), str.end());
	for (int i=0;i<len;i++){
		if(str[i]==str[i+1]){
			return "False";
		}
		
	}return "True";
}
int main(){
	string str1;
	cout<<"Enter the string to be checked\n";
	cin>>str1;
	cout<<tocheckerios(str1)<<endl;
        
     
    return 0;
    system["PAUSE"];

}
