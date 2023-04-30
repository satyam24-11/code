#include<bits/stdc++.h>
using namespace std;
/*
void solution(){
	
	int n;
	cin>>n;
	string s;
	cin>>s;
	int count =0;
	for(int i=0;i<n;i++){
		if(s[i]=='Q'){
			count++;
		}
		else{
			if(count!=0){
				count--;
			}
		}

	}
	if(count!=0){
		cout<<"no"<<endl;
	}
	else{
		cout<<"yes"<<endl;
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solution();
	}
}*/

#include<bits/stdc++.h>
using namespace std;

void solution(){
	int x,y,z;
	cin>>x>>y>>z;
	double a;
	int b;
	a=y/z;
	b=ceil(a);
	if(a==1){
		cout<<x<<endl;
	}
	else{
		cout<<x*b<<endl;
	}
    
}



int main(){
	int t;
	cin>>t;
	while(t--){
		solution();
	}
}