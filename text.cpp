#include<bits/stdc++.h>
using namespace std;
const int N=2e5+7;

vector<bool> is_prime(N + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= N; i++)
    {
        if (is_prime[i] && (long long)i * i <= N)
        {
            for (int j = i * i; j <= N; j += i)
                is_prime[j] = false;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int l,r;
		cin>>l>>r;
	vector<bool>is_prime();

   int p1=lower_bound(begin(primes),end(primes),l)-primes.begin();
   int p2=upper_bound(begin(primes),end(primes),r)-primes.begin()-1;
   if(p1>p2){
   	return cout<<r-l-1<<endl;

   }
   int ans=0;
   ans=max(ans,primes[p1]-l-1);

   ans=max(ans,r-primes[p2]-1);

   for(int i=p1+1;i<=p2;i++){

   	ans=max(ans,primes[i]-primes[i+1]-1);

   }
   return cout<<ans<<endl;
	}
	return 0;
}