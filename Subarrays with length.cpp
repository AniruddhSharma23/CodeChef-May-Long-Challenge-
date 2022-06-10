
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
        vector<ll> v;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        ll k = 0;
        unordered_map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            ll len = v[i];
            ll si = ((i - len + 1) >= 0) ? (i - len + 1) : 0;
            if (mp.find(v[i]) != mp.end() && mp[v[i]] >= si)
            {
                si = mp[v[i]] + 1;
            }
            ll ei = ((si + len - 1) >= n) ? n - 1 : (si + len - 1);
            if (ei - si + 1 != len || si > ei)
            {
                continue;
            }
            else
            {
                k += min(i - si + 1, n - ei);
                mp[v[i]] = i;
            }
        }
        cout << k << endl;
    }
    return 0;
}