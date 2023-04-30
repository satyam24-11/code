#include <bits/stdc++.h>
using namespace std;

void solution()
{
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '1')
		{
			s[i] = '0';
		}
		else
			s[i] = '1';
	}
	for (int i = 0; i < s.length(); i++)
	{
		cout << s[i];
	}
}

int main()
{
	//  int t;
	// cin >> t;
	//  while (t--)
	//  {
	solution();
	//  }
}
