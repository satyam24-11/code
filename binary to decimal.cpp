#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
// decimal to binary

// int convert_binary(int n)
// {
//     long long bin = 0;
//     int rem, i = 1;

//     while (n != 0)
//     {
//         rem = n % 2;
//         n /= 2;
//         bin += rem * i;
//         i *= 10;
//     }

//     return bin;
// }
// int convert(int n)
// {
//     int ans = 0, i = 0;
//     while (n != 0)
//     {
//         int rem = n % 10;
//         if (rem)
//         {
//             ans +=  pow(2, i);
//         }
//         n = n / 10;
//         i++;
//     }
//     return ans;
// }
// void answer()
// {
//     int n;
//     cin >> n;
//     cout << convert(n) << endl;
// }

// int32_t main()
// {
//     make_fast;
//     // int t;
//     // cin >> t;
//     // while (t--)
//     // {
//     answer();
//     // }
//     return 0;
// }







class solution{
    public:
    int bitwise(int n){
        int ans=0;
        int i=0;
        while(n!=0){
            int rem=n%10;
            if(rem){
                ans+=pow(2,i);
            }
            n=n/10;
            i++;
        }
        return ans;
    }
};

int32_t main(){
    int n;
    cin>>n;
     solution obj;
     cout<<obj.bitwise(n)<<endl;
}