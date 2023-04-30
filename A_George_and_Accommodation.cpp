#include <iostream>
using namespace std;
int main()
{
    int n, p, q;
    cin >> n,n=0;
    while (cin >> p >> q)
        if (p + 2 <= q)
            n++;
    cout << n;
}