#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast  \
std::ios_base::sync_with_stdio(false);\
std::cin.tie(NULL);
const int mod = 1000000007;
bool ar[90000001];
vector<int> primes;
void seive()
{
   int maxN=90000000;
   ar[0]=ar[1]=true;
    for(int i=2;i*i<=maxN;i++){
         if(!ar[i]){
              for(int j=i*i;j<=maxN;j+=i){
                ar[j]=true;
              }
         }
    }
    for (int i = 2;i<=maxN;i++){
        if(!ar[i])
              primes.push_back(i);
    }

}
int32_t main()
{
    make_fast;
   int q,n;
   cin>>q;
   seive();
   while(q--){
    cin>>n;
    cout << primes[n - 1] << endl;
   }
   return 0;
}