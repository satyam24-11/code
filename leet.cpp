#include <bits/stdc++.h>
using namespace std;
#define ll long long
 /*int gcd (int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd (b, a % b);
}*/

// (a + b) mod m = (a mod m + b mod m) mod m
// (a - b) mod m = (a mod m - b mod m)+b mod m
// (a ? b) mod m = (a mod m ? b mod m) mod m
// (a · b) mod m = (a mod m · b mod m) mod m


/*void solution(){
  int n;
  cin>>n;
  int array[n][n-1];
  vector<int>v;
  for(int i=0;i<n;i++){
    for(int j=0;j<n-1;j++){
        cin>>array[i][j];
        if(j==0){
            v.push_back(array[i][j]);

        }
    }
  }
  sort(v.begin(),v.end());
  int first;
  for(int i=1;i<v.size();i++){
    if(v[i-1]==v[i]){
        first=v[i-1];
        break;
    }
  }
  int index=0;
  for(int i=0;i<n;i++){
    if(array[i][0]!=first){
        index=i;
    }
  }
  cout<<first<<" ";
  for(int i=0;i<n-1;i++){
    cout<<array[index][i]<<" ";
  }
cout<<endl;
}*/

void solution(){
    int n;
    cin >> n;
    
    vector<int> a(n);
    int sum = 0, mini = 2;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        if (i > 0) {
            mini = min(mini, a[i] + a[i - 1]);
        }
    }
    cout << sum - 2 * mini << "\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}
