#include<bits/stdc++.h>
using namespace std;


int main() {
    
    int t;
    
    cin>>t;
    for(int i=0;i<t;i++)
    {
        char s[10001],se[10001],so[10001];
        int k1=0,k2=0;
        cin>>s;
  	      int n=strlen(s);
        for(int j=0;j<n;j++)
        {
            if(j%2==0)
            {
                se[k1]=s[j];
                k1++;
            }
            else
            {
                so[k2]=s[j];
                k2++;
            }
        }
        for(int k=0;k<k1;k++)
        {
            cout<<se[k];
        }
        cout<<" ";
        for(int k=0;k<k2;k++)
        {
            cout<<so[k];
        }
        cout<<endl;
    }
    
    return 0;
}

