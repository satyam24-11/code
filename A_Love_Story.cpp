#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;

void answer()
{
    string s;
    cin>>s;
    string s1="codeforces";
    int count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]!=s1[i]){
            count++;
        }
    }
   cout<<count<<endl;
   
}

int32_t main()
{
    make_fast;
    int t;
    cin >> t;
    while (t--)
    {
        answer();
    }
    return 0;
}