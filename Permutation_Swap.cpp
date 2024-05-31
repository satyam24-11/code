#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
int gcd (int a, int b) {
   if (b == 0)
       return a;
   else
       return gcd (b, a % b);
}
void answer()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i = 0;i<n;i++){
        cin >> a[i];
    }
    vector<int>v;
    for (int i= 0; i < n;i++){
        if(abs(i+1-a[i]!=0)){
            v.push_back(abs(i+1-a[i]));
        }
    }
    int count;
    if(v.size()==0){
        cout << 1 << endl;
    }
    else {
        count = v[0];
        for (int i = 0; i < v.size();i++){
            count= gcd(count, v[i]);
        }
        cout << count << endl;
    }

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