#include <bits/stdc++.h>
#define make_fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define pb push_back
#define fr(i,a,b) for(ll i=a;i<b;i++)
#define all(x) begin(x), end(x)
#define int_ump unordered_map<int,int>
#define char_ump unordered_map<char,int>
#define int_set unordered_set<int>
#define string_set unordered_set<string>
#define char_set unordered_set<char>
#define prio_q priority_queue<int>
#define inc_sort(x) sort((x).begin(), (x).end())
#define dsc_sort(x) sort((x).begin(), (x).end(),greater<int>())
#define sum_vec(x) accumulate(x.begin(), x.end(), 0LL)
#define maxx(x) *max_element(x.begin(), x.end())
#define maxset(st) *(st.rbegin())
#define minset(st) *(st.begin())
#define minn(x) *min_element(x.begin(), x.end())
#define lr_bound(x,num) lower_bound(x.begin(),x.end(),num) - x.begin()
#define up_bound(x,num) upper_bound(x.begin(),x.end(),num) - x.begin()
#define bin_search(x,num) binary_search(x.begin(),x.end(),num)
#define nxt_perm(number) next_permutation(number)
#define ulta_kro(x) reverse(begin(x),end(x))
#define mod1e7 1000000007
#define mod1e9 1000000009
#define mod998 998244353
long long casee = 1;
#define facebook cout << "Case #" << casee << ": " ;
#define yess cout<<"YES"<<endl
#define noo cout<<"NO"<<endl
using namespace std;
 
// Structures
 
// LinkedList
/*struct ListNode{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};*/
 
// pair comparator 
bool my_condition(pair<int,int>& a, pair<int,int>& b){
    if (a.first != b.first)
        return (a.first < b.first);
    return (a.second > b.second);
}
 
// Hash function
// unordered set of pairs : can't use directly so Hash Function helps
struct hashFunction{
  size_t operator()(const pair<int,int> &x) const{ return x.first ^ x.second; }
};
 
 
// struct compare {
//     bool operator()(vector<vector<int>> v1(2,vector<int>), pair<int, int> p2)
//     {
//         if (p1.second == p2.second)
//             return p1.first < p2.first;
//         return p1.second < p2.second;
//     }
// };
 
 
 
// ******************** output file checking and copying ********************
 
void transfer_one_to_two(){
    fstream f1, f2; string ch;
    f1.open("output1.txt", ios::in);
    f2.open("output2.txt", ios::out);
    while (!f1.eof()) {
        getline(f1, ch);
        f2 << ch << endl;
    }
    f1.close(); f2.close();
}
 
void ans_checking(){
    fstream f1, f2;
    string s1,s2;
    f1.open("output2.txt",ios::in);
    f2.open("output3.txt",ios::in);
    vector<string> vec1,vec2;
    while(!f1.eof() && !f2.eof()){
        getline(f1,s1);
        getline(f2,s2);
        vec1.pb(s1); vec2.pb(s2);
    }
    inc_sort(vec1); inc_sort(vec2);
    // cout << vec1.size() << " " << vec2.size() << endl;
}
 
// ******************** output file checking and copying ********************
 
 
// *******************************   inputs & outputs  *******************************
 
 
void input_matrix(vector<vector<int>>& matrix){
    int n=matrix.size(), m=matrix[0].size();
    fr(i,0,n){
        fr(j,0,m) cin>>matrix[i][j];
    }
}
void output_matrix(vector<vector<int>>& matrix){
    int n=matrix.size(), m=matrix[0].size();
    fr(i,0,n){
        fr(j,0,m) cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
}
 
void input_vector(int n, vector<int>&v){
    fr(i,0,n) cin>>v[i];
}
 
 
void print_vec(vector<ll>& vec){
    for(auto v:vec)
        cout<<v<<" ";
    cout<<endl;
}
 
 
// *******************************   NUMBER THEORY *******************************
 
// pending ****************************************
int sieve[1000005];
int N = 1000000;
void createSieve(){
    for(int i=2;i<=N;i++) sieve[i]=1;
 
    for(int i=2;i*i<=N;i++){
        if(sieve[i]==1){
            for(int j=i*i;j<=N;j+=i){
                sieve[j] = 0;
            }
        }
    }
}
// pending ****************************************
 
// O(sqrt(N))
// Max number of factors of a number is Log(N) 
void printFactors(ll n){
    for(ll i=2;i*i<=n;i++){
        while(n%i==0){
            cout << i << " ";
            n = n/i;
        }
    }
    cout<<endl;
}
// Better Time Complexity of finding factors of a number : O(LogN) - base 2
void createSieveForPF(int n){
    // step 1 says mark from 2 to 10^6 as i
    for(int i=2;i<=N;i++) sieve[i]=i;
    // step 2 
    for(int i=2;i*i<=N;i++){
        if(sieve[i]==i){
            // mark all the multiples of i if sieve[j] = j;
            for(int j=i*i;j<=N;j+=i){
                if(sieve[j] == j){
                    sieve[j] = i;
                }
            }
        }
    }
    while(n!=1){
        cout << sieve[n] << " ";
        n = n/sieve[n];
    }
}
// ******  Euler's Totient Function  ******
// Of a number N is Numbers which have gcd with n equal to 1
ll Euler_totient(ll n){
    int_set st;
    while(n!=1){
        st.insert(sieve[n]);
        n = n/sieve[n];
    }
    ll ans = 1;
    for(auto it:st)
        ans = ans * (1-(1/it));
    return ans;
}
 
// ******  Wilson's Theorem  ******
// if n is prime, then if follows -> (factorial(n-1)%n == n-1)
// count primes to follow Wilson
 
// ****** LDE : Linear Diphantine Equation ******
// ax + by = c has a solution only if 
// c % (gcd(a,b)) == 0
// where solution can be both positive and negative
 
// constant time operation : O(1)[]
int countDigit(ll n){ return floor(log10(n) + 1); }
int char_count_string(char c, string s){ return count(all(s),c); }
bool perfectCube(long long N){
    long long cube_root = round(cbrt(N));
    return (cube_root * cube_root * cube_root == N);
}
int my_ceil(int a, int b){ 	return (a / b) + ((a % b) != 0); } 
 
 
// *******************************   useful functions   *******************************
 
void whatsTheTime(){
    auto timenow = chrono::system_clock::to_time_t(chrono::system_clock::now());
    cout<<ctime(&timenow)<<endl;
}
 
bool validParenthesis(string s) {
    stack<int> st;
    for(auto c:s){
        if(c=='('){
            st.push(c);
        }
        else{
            if(st.empty()) return false;
            else if (!(st.top()=='(' && c==')')) return false;
            else st.pop();
        }
    }
    return st.empty();
}
 
 
// *****************************  Interactive function  *****************************
int ask(int l, int r){
    if(l>=r) return -1;
    cout << "? " << l+1 << " " << r+1 << endl;
    int ans; cin>>ans;
    return ans-1;
}
// *****************************  Interactive function  *****************************
 
 
// ##############################  DP ##############################
/*
    *****************  RECURSION  *****************
    1) Express everything in terms of indices
    2) Explore all possibilities i.e. all paths
    3) 
 
    *****************  TABULATION  *****************
    1) Copy the base case
    2) Write down the changing parameters in opposite manner
    3) copy the recurrence
*/
 
// ******* longest Common Subsequence *******
// Recursion + Memoization
// TC : O(M X N)
// SC : O(M X N) + O(M+N)
// Here, shifting of index is done in order to convert it into tabulation
// for using base case condition initialization
// POST : "if(i<0 || j<0)" & "s[i]==s[j]"
int lcs_recur(int i, int j, string s, string t, vector<vector<int>>& dp){
    if(i==0 || j==0) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    if(s[i-1]==t[j-1]) return dp[i][j] = 1 + lcs_recur(i-1,j-1,s,t,dp);
    return dp[i][j] = max(lcs_recur(i-1,j,s,t,dp),lcs_recur(i,j-1,s,t,dp));
}
// POST : lcs_recur(n-1,m-1) & dp(n,m)
int lcs_recursion(string s, string t){
    int n = s.size(), m = t.size();
    vector<vector<int>> dp(n+1, vector<int> (m+1,-1));
    return lcs_recur(n,m,s,t,dp);
}
 
// TABULATION
int lcs_tabu_subsequence(string s, string t){
    int n = s.size(), m = t.size();
    vector<vector<int>> dp(n+1, vector<int> (m+1,0));
    for(int i=0;i<=n;i++) dp[i][0] = 0;
    for(int j=0;j<=m;j++) dp[0][j] = 0;
 
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s[i-1]==t[j-1]) dp[i][j] = 1 + dp[i-1][j-1];
            else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
        }
    }
 
    int len = dp[n][m];
    bool ok = false;
    string ans = "";
    if(ok){
        // print lcs string
        for(int i=0;i<len;i++) ans += '$';
        int index = len-1;
        int i=n, j=m;
        while(i>0 && j>0){
            if(s[i-1]==t[j-1]){
                ans[index] = s[i-1];
                index--;
                i--;
                j--;
            }
            else if(dp[i-1][j] > dp[i][j-1]) i--;
            else j--;
        }
        cout << ans << endl;
    }
    return dp[n][m];
}
 
// ******* longest Common Substring *******
int lcs_tabu_Substring(string s, string t){
    int n = s.size(), m = t.size();
    vector<vector<int>> dp(n+1, vector<int> (m+1,0));
    for(int i=0;i<=n;i++) dp[i][0] = 0;
    for(int j=0;j<=m;j++) dp[0][j] = 0;
 
 
    int res = 0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s[i-1]==t[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
                res = max(res,dp[i][j]);
            }
            else dp[i][j] = 0;
        }
    }
 
    int len = res;
    bool ok = false;
    string ans = "";
    if(ok){
        // print lcs substring
        for(int i=0;i<len;i++) ans += '$';
        int index = len-1;
        int i=n, j=m;
        while(i>0 && j>0){
            if(s[i-1]==t[j-1]){
                ans[index] = s[i-1];
                index--;
                i--;
                j--;
            }
            else if(dp[i-1][j] > dp[i][j-1]) i--;
            else j--;
        }
        cout << ans << endl;
    }
    return res;
}
 
 
 
// ********** longest Palindromic Subsequence **********
int lps_recur(int i, int j, string s, vector<vector<int>>& dp){
    if(i>j) return 0;
    if(i==j) return 1;
    if(dp[i][j]!=-1) return dp[i][j];
    if(s[i]==s[j]){
        return dp[i][j] = 2 + lps_recur(i+1,j-1,s,dp);
    }
    return dp[i][j] = max(lps_recur(i,j-1,s,dp), lps_recur(i+1,j,s,dp));
}
// OR we can reverse string and call LCS function
 
// int lps(string s){
// 	int n = s.size();
// 	vector<vector<int>> dp(n+1, vector<int> (n+1,-1));
//     return lps_recur(0,n-1,s,dp);
 
// }
int longest_palindromic_subsequence(string s){
    string t = s;
    reverse(all(s));
    return lcs_tabu_subsequence(s,t);
}
// ##############################  DP ##############################
 
 
 
 
 
 
ll gcd(ll a, ll b){
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    // base case
    if (a == b)
        return a;
  
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
 
int lcm(int a, int b) {
    // LCM * GCD = |a * b|
    // Therefore, LCM = |a * b| / GCD(a, b)
    return (a * b) / gcd(a, b);
}

bool isPrime(ll n){
    if (n <= 1)
        return false;
    for (ll i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}
 
bool isPrime(int n){
    if (n <= 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i <= sqrt(n); i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
 
 
// SINGLY LINKED LIST
// Middle node in a linked list and reversing the first half of the list
/*
void LinkedList(ListNode* head){
    ListNode *slow = head, *fast = head, *prev = NULL, *tmp;
    while(fast && fast -> next)
        fast = fast -> next -> next,
        tmp = slow -> next, slow -> next = prev, prev = slow, slow = tmp;
    // taking care of odd and even indices
    slow = (fast ? slow -> next : slow);
}
*/
 
int power(ll n){
    ll ans = 1;
    for(int i=1;i<=n;i++){
        ans = ans * 2;
        ans = ans % mod1e7;
    }
    return ans;
}
 
string decToBinary(int n, int val){
    string ans = "";
    for (int i = n-1; i >= 0; i--) {
        ll k = val >> i;
        if (k & 1)
            ans += "1";
        else
            ans += "0";
    }
    return ans;
}
 
bool isPowerOfTwo(int n){
   if(n==0)
   return false;
   return (ceil(log2(n)) == floor(log2(n)));
}
 
int highestPowerof2(int n){
    int res = 0;
    for (int i = n; i >= 1; i--) {
        if ((i & (i - 1)) == 0) {
            res = i;
            break;
        }
    }
    return res;
}
 
 
/*
int segment_tree[4*1000005];
void build_segment_tree(ll ind, ll low, ll high){
    if(low==high){
        segment_tree[ind] = low;
        return;
    }
    ll mid = low + (high-low)/2;
    build_segment_tree(2*ind+1,low,mid);
    build_segment_tree(2*ind+2,mid+1,high);
    ll left_child = 2*ind+1, right_child = 2*ind+2;
    segment_tree[ind] = max(segment_tree[left_child], segment_tree[right_child]);
}
int query(int ind, int low, int high, int l, int r){
    if(low>=l && high<=r){
        return segment_tree[ind];
    }
    if(high<l || low>r){
        return INT_MIN;
    }
    int mid = low + (high-low)/2;
    int left = query(2*ind+1,low,mid,l,r);
    int right = query(2*ind+2,mid+1,high,l,r);
    return max(left,right);
}
 
USING SEGMENT TREE
int main(){
    int n; cin>>n;
    for(int i=0;i<n;i++) cin>>vec[i];
    build_segment_tree(0,0,n-1);
    int q; cin>>q;
    while(q--){
        int l,r; cin>>l>>r;
        cout << query(0,0,n-1,l,r);
    }
}
*/
 
long long pow(int a, int n){
    int ans=1;
      while(n>0){
          // calculate last bit(right most) bit of n
        int last_bit = n&1;
           
          //if last bit is 1 then multiply ans and a
          if(last_bit){
            ans = ans*a;
        }
       
      //make a equal to square of a as on every succeeding bit it got squared like a^0, a^1, a^2, a^4, a^8
      a = a*a;
      n = n >> 1;
    }
      return ans;
}
 
string DecimalToBinary(int num){
    string str;
    while(num){
      if(num & 1)
        str+='1';
      else // 0
        str+='0';
      num>>=1;
    }
    ulta_kro(str);
    return str;
}
 
ll powermod(ll x, ll y, ll p){
    ll res = 1;x = x % p;
    if (x == 0) return 0;
    while (y > 0){
        if (y & 1)res = (res*x) % p;
        y = y>>1;
        x = (x*x) % p;
    }
    return res;
}
 
string checking_mex(int i){
    if(i==0) return "";
    return checking_mex((i-1)/26)+(char)((i-1)%26+'a');
}
string here_is_the_mex_bro(string s){
    for(int i=1;;i++){
        string cmex = checking_mex(i);
        if(s.find(cmex) == s.npos){
            return cmex;
        }
    }
    return "";
}
 
 
 
// **************************   MAIN CODE   **************************   //
// ULTIMATE PRIORITY QUEUE
// priority_queue<pair<int,int>,vector<pair<int,int>>,comparePair>pq(mp.begin(),mp.end());
 
void solve(){
    
}
// **************************   MAIN CODE   **************************   //
 
int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    make_fast;
    int t; cin>>t;
    while(t--){
        solve();
        casee++;
    }
    solve();
    // whatsTheTime();
    return 0;
}
