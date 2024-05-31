#include <bits/stdc++.h>
using namespace std;
#define int long long
#define make_fast                          \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);
const int mod = 1000000007;
// decimal to binary
int convert(int n)
{
    long long bin = 0;
    int rem, i = 1;

    while (n != 0)
    {
        rem = n % 2;
        n /= 2;
        bin += rem * i;
        i *= 10;
    }

    return bin;
}
// decimal to hexa
string decToHexa(int n)
{

    string ans = "";

    while (n != 0)
    {

        int rem = 0;

        char ch;

        rem = n % 16;

        if (rem < 10)
        {
            ch = rem + 48;
        }
        else
        {
            ch = rem + 55;
        }

        ans += ch;
        n = n / 16;
    }
    int i = 0, j = ans.size() - 1;
    while (i <= j)
    {
        swap(ans[i], ans[j]);
        i++;
        j--;
    }
    return ans;
}

int checkPalindrome(string str)
{
    int len = str.length();

    for (int i = 0; i < len / 2; i++)
    {

        if (str[i] != str[len - i - 1])
            return false;
    }

    return true;
}
void answer()
{
    int n;
    cin >> n;
    int binary = convert(n);
    string decimal = to_string(n);
    string b = to_string(binary);
    string hexadeci = decToHexa(n);
    // cout << binary << " " << hexadeci << endl;
    if ((checkPalindrome(b) && checkPalindrome(hexadeci)) || (checkPalindrome(hexadeci) && checkPalindrome(decimal)) || (checkPalindrome(b) && checkPalindrome(decimal)))
    {
        cout << "ghavi" << endl;
    }
    else
        cout << "fanni khordim" << endl;
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