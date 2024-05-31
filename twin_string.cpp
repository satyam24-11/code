#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
  int n;
  cin>>n;
  string s;
  cin>>s;
unordered_map<char,int>mpp;
for(int i=0;i<n;i++){
    mpp[s[i]]++;
}
vector<char> v;
for(auto it: mpp){
    if(it.second%2==0){
        v.push_back(it.first);
    }
}
cout << v.size() << endl;
}
int64_t main()
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