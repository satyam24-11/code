#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1000000007;
void solution()
{
    // string s1,s2;
    // cin>>s1>>s2;
    // string result="";
    // int temp=0;
    // int size_s1=s1.size()-1;
    // int size_s2=s2.size()-1;
    // while(size_s1>=0 || size_s2>=0 || temp==1){
    //     temp+=(size_s1>=0)? s1[size_s1]-'0':0;
    //     temp += (size_s2 >= 0) ? s2[size_s1] - '0' : 0;
    //     result=char(temp%2 +'0')+ result;
    //     temp/=2;
    //     size_s1--;
    //     size_s2--;
    // }
    // cout<<result<<endl;
    string s1,s2;
    cin>>s1>>s2;
     for(int i=0;i<s1.length();i++){
        cout<<(s1[i]^s2[i]);
     }
     cout<<endl;

   
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
