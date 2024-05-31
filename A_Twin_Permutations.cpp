#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer(){
    int n;
    cin>>n;
    int maxi = 0;
    int mini = n;

    vector<int>v(n+1);
    for(int i=1;i<=n;i++){
        cin>>v[i];
        if(v[i]>maxi){
            maxi = v[i];
        }
        if(v[i]<mini){
            mini = v[i];
        }
    }
    maxi = maxi + 1;
    for(int i=1;i<=n;i++){
        cout << maxi - v[i] << " ";
    }
    cout << endl;
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