// CPP program To calculate The Value Of nCr
#include <bits/stdc++.h>
using namespace std;



/*// Returns factorial of n
int fact(int n)
{
	if(n==0)
	return 1;
	int res = 1;
	for (int i = 2; i <= n; i++)
		res = res * i;
	return res;
}

// Driver code
int main()
{    
	int t;
	cin>>t;
	while(t--){
	  int n;
	  cin>>n;
	  int a[n];
	  for(int i=0;i<n;i++){
	  	cin>>a[i];
	  }
      int x=10-n;
	cout<< fact(x) / (2 * fact(x - 2))*6<<endl;
	
	}
	return 0;
}

void solution(){
	int n;
	cin>>n;
	vector<int> v(n);
	vector<int>v1;
	vector<int>v2;
	for(int i=0;i<n;i++){
  		cin>>v[i];
	}
	int max=v[0];
	  for (int i = 1; i < n; i++){
        if (v[i] > max)
            max = v[i];

}

   int min=v[0];
   for(int i=0;i<n;i++){
   	if(v[i]<min)
   		min=v[i];
   }
 v1.push_back(max);
 v1.push_back(min);
 for(int i=0;i<v1.size();i++){
 	cout<<v1[i];
 }

}
int main(){
	int t;
	cin>>t;
	while(t--){
		solution();
	}
}
void solution(){
	int x;
	cin>>x;
     int a[3];
     int flag=0;
     for(int i=0;i<3;i++){
     	cin>>a[i];
     }
	for(int i=0;i<2;i++){
 		if(a[x-1]==0){
 			flag=0;
 			break;
 		}
 		else {
 			x=a[x-1];
 			flag++;

 		}
	}
	if(flag==0){
		cout<<"no"<<endl;
	}
	else cout<<"yes"<<endl;
   
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solution();
	}
	return 0;
}
void solution(){
   int n;
   cin>>n;
   int a[n];
    int flag=0;
   for(int i=0;i<n;i++){
   	cin>>a[i];
   }
  
   for(int i=0;i<n;i++){
   	if((a[i])%2==0 &&(a[i+1])%2==0){
   		flag=0;
   	}
   	if((a[i])%2!=0&&(a[i+1])%2!=0){
   		flag=0;
   	}
 
   else flag++;

}
cout<<flag<<endl;
   
}
   

int main(){
	int t;
	cin>>t;
	while(t--){
		solution();
	}
	return 0;
}*/
void solution(){
  int x,y;
  cin>>x>>y;
  int z=sqrt(pow(x,2)+pow(y,2));
  cout<<z<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solution();
	}
}