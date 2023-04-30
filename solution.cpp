
#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int w,x,y,z,a;
		cin>>w>>x>>y>>z>>a;
		a=x-y;
		int b;
		b=w+(a*z);
		cout<<b<<endl;

	}
	return 0;
}