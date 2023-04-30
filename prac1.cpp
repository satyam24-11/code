#include<bits/stdc++.h>
using namespace std;

void solution(){
	int n,i;
	cin>>n;
	string a;
        cin>>a;
        
        int one=0;
        
        for(int i=0; i<n; i++)
        {
            if(i==0){
                if(a[i]=='1'){
                    one++;
                }
            }
            else
            {
                if(a[i]=='1'){
                    one++;
                    if((one%2)==0)
                    cout<<"-";
                    else
                    cout<<"+";
                }else{
                    cout<<"+";
                }
            }
        }
        cout<<"\n";
}

int main(){
	int t;
	cin>>t;
	while(t--){
	solution();
	}
	return 0;
}