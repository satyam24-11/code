#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1000000007;
void solution()
{
   string s1,s2;
   cin>>s1>>s2;
   reverse(s1.begin(),s1.end());
   if(s1==s2){
       cout << "YES" << endl;
   } 
   else cout<<"NO"<<endl;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //  int t;
    //  cin >> t;
    //  while (t--)
    //  {
     solution();
    //  }
    return 0;
}
