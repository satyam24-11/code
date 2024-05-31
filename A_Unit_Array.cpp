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
    cin >> n;
    int arr[n];
    int pos = 0;
    int neg = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        if(arr[i]<0){
            neg++;
        }
        else{
            pos++;
        }
    }
    if(pos%2==0 || neg%2==0){
        
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