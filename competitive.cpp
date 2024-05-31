#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool isPerfectSquare(long double x){
	if(x>=0){
		ll sr=sqrt(x);
		return (sr*sr==x);
	}
	return false;
}

void solution(){
	int n;
	cin>>n;
	map<int, int> map;
	 string s;
        cin>>s;
	for (int i =0;i<2*n-2; i++)
	{
        map[s[i]]++;
	}
	for(auto pr: map){
		cout<<pr.f;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
	solution();
	}
	return 0;
}