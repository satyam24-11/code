#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long int n;
	    cin>>n;
	    long long int a[n];
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	    }
	    sort(a,a+n);
	   long long int c=0,ans=0;
	    for(int i=0; i<n; i++){
	        if(a[i]==a[i+1]){
	            c++;
	        }
	        else{
	           
	            ans+=c*(c+1)/2;
	             c=0;
	        }
	    }
	    cout<<ans<<endl;
	    
	}
	return 0;
}