
#include <iostream>
using namespace std;
#include <bits/stdc++.h>
using ll = long long;

int main()
{
    // your code goes here
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll l = 0;
        ll r = n - 1;
        ll k = 0;
        while (l < r)
        {
            if (s[l] != s[r])
            {
                k++;
            }
            l++;
            r--;
        }
        cout << (k + 1) / 2 << endl;
    }
    return 0;
}