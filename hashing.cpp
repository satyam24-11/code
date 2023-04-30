#include <bits/stdc++.h>
using namespace std;

//number hashing
/*int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
  
//precompute
   int hash[n]={0};
   for(int i=0;i<n;i++){
    hash[arr[i]]++;
   }

  int q;
  cin>>q;
  while(q--){
    int number;
    cin>>number;
    //fetch
    cout<<hash[number]<<endl;
  }
}*/

//character hashing 
int main(){
    string s;
    cin>>s;
  //pre compute
    int hash[256]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]]++;
    }

    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        //fetch
        cout<<hash[c]<<endl;
    }
}