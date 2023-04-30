#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	int temp=0,i,j;
	int a[n];
	for(i=0;i<n;i++)
	    {
	    cin>>a[i];
	    }
	for(j=0;j<n;j++)
    	{
	    if(a[j]==0)
	    {
	        temp=0;
	        break;
	        
	    }
	    else if(a[j]<0)
	    {
	        temp++;
	    }
	    
     	}
	    if(temp%2==0){
	        cout<<"0"<<endl;
	    }
	    else{
	        cout<<"1"<<endl;
	    }
	}
	
	return 0;
}