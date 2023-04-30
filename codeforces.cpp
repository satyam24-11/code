#include<bits/stdc++.h>
using namespace std;


	
		/*{
		int n;
		cin>>n;
		int a[n];
		int c=0,i;
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		for(i=0;i<n-1;i++){
			if(a[i]==a[i+1]){
				c++;
			}
		}
		if(c==0){
			cout<<"yes"<<endl;
		}
		else cout<<"no"<<endl;
	}
}

	string str ;
    cin>>str;
    char ch = 'a';
 
    size_t index = str.rfind(ch);
 
    if (index != string::npos) {
        cout << index+1 << endl;        
    }
 else cout<<"-1"<<endl;
   
}
	int main()
{
    int n, i;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
   
   
    int length=sizeof(a)/sizeof(int);

if(length==1){
	cout<<"1"<<endl;
}
else{
	cout<<length-1<<endl;
}
}
int main()
{
    int num,i;        

    cin >> num;
    int arr[102];
    int ans;
    for (int i = 1; i <= num; i++)
    {
        cin >> arr[i];
    }
    ans=1;
    for(i=2;i<=num;i++){
    	if(arr[ans]<arr[i]){
    		ans=i;
    	}
     cout<<ans<<endl;
    
    
    return 0;
    }
}
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  
  int ans;
  cin >> n;
  int h[n];
  for(int i=1;i<=n;i++){
  	cin>>h[i];
  }
  ans=1;
  for(int i=2;i<=n;i++){
    if(h[ans]<h[i])ans=i;
  }
  cout << ans <<endl;
  return 0;
}


int main(){
	float a,b;
	cin>>a>>b;
	float d=b/a;
	float rounded=(int)(d*1000.0)/1000.0;
	if(rounded==0){
	cout<<"0.000"<<endl;
}
else cout<<rounded<<endl;
}


int main(){
  int n;
  cin>>n;
  int fact=1;
  for(int i=n;i>=1;i--){
     fact=fact*i;
}
if(n==0){
	cout<<"1"<<endl;
}
else
cout<<fact<<endl;;
#include<bits/stdc++.h>
using namespace std;
int main()
{
  valarray<int>varr;
  
  cout<<varr.sum()<<endl;
}

int main(){
	string s;
	getline(cin,s);
	cout<<s<<endl;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
  int h,w;
  cin>>h>>w;
  vector<string>c(h);
  for(int i=0;i<h;i++){
    cin>>c[i];
  }
  vector<int>ans(w);
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      if(c[i][j]=='#'){
        ans[j]++;
      }
    }
  }
  for(int j=0;j<w;j++){
    cout<<ans[j]<<" ";
  }
}
    

#include<bits/stdc++.h>
using namespace std;

#include<iostream>
using namespace std;
int main(){
	int t,n;
	for(cin>>t;t--;){
		cin>>n;
		int a[n],b[n],c=0,a0=0,b0=0;
		for(int i=0;i<n;i++){cin>>a[i];if(a[i]==0) a0++;}
		for(int i=0;i<n;i++){cin>>b[i];if(b[i]==0) b0++;}
		for(int i=0;i<n;i++) if(a[i]!=b[i]){c++;}
		cout<<min(c,abs(a0-b0)+1)<<endl;
	}
	return 0;
}

void solution()
{
	int n;
	cin>>n;
	int a[n];
	int cnt=0;
	for(int i=0;i<n;i++){
		cin>>a[i];	
	}

	for(int i=0;i<n;i++){
		if(a[i-1]>a[i]&&a[i]<a[i+1]){
			cout<<"YES"<<endl;
		}
		else 
		{
			sort(a,a+n);
			if(a[i]==a[i+1]){
				cnt++;
			}
		}
	}
	if(cnt==1){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
}

void solution(){
	
	    long long n,k;
	    cin>>n>>k;
	    long long arr[n];
	    long long product=1;
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        product=product*arr[i]%k;
	        
	    }
	    if(product==0)
	    cout<<"yes"<<endl;
	    else
	    cout<<"no"<<endl;
	}
	
void solution(){

}

int main(){
	int t;
	cin>>t;
	while(t--){
		solution();
	}
}

#include <bits/stdc++.h>
using namespace std;


 void solution(){
    int n,k,v;
    cin>>n>>k>>v;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[n];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
   int m=(n+k)*v;
   int average=m-sum;
   if(average>0&&average%k==0){
       cout<<average/k<<endl;
   }
   else{
      cout<<"-1"<<endl; 
   } 
    
 }*/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k,v;
	    cin>>n>>k>>v;
	    int arr[n];
	    for(int i = 0; i < n; i++){
	        cin>>arr[i];
	    }
	    int sum = 0;
	    for(int i = 0; i < n; i++){
	        sum += arr[i];
	    }
	    int l = (n+k)*v;
	    int diff = l-sum;
	    if(diff > 0 && diff%k == 0){
	        cout<<diff/k<<endl;
	    } else{
	        cout<<-1<<endl;
	    }
	}
	return 0;
}
 
 
 

