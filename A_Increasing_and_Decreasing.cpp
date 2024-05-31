#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
void answer()
{
    int x, y, n;
    cin >> x >> y >> n;
    // int ar[n];
    //  ar[n - 1] =y;
    //  int diff = 1;
    //  for (int i = n - 2; i >= 0;i--){
    //      ar[i] = ar[i + 1] - diff;
    //  }
    //  int total_sum = n * (n - 1) / 2;
    
    //  if ((y - x) >=total_sum)
    //  {
    //      ar[0] = x;
    //      for (int i = 0; i < n;i++){
    //          cout << ar[i] << " ";
    //      }
    //      cout << endl;
    //  }
    //  else {
    //      cout << "-1" << endl;
    //  }
    vector<int> v;
    int diff = 1;
    for (int i = 0; i < n;i++){
        v.push_back(y);
        y -= diff;
        diff++;
    }
    int total_sum = n * (n - 1) / 2;
    if(v[v.size()-1]<x){
        cout << "-1" << endl;
    }
    else {
        cout << x << " ";
        for (int i = v.size() - 2; i >= 0;i--){
            cout << v[i] << " ";
        }
        cout << endl;
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