
#include <iostream>
using namespace std;
#include <bits/stdc++.h>
using ll = long long;
const ll M = 1e9 + 7;

int main()
{
    // your code goes here
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll s = 0;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = i + 1; j < n; j++)
            {
                ll max = v[i];
                ll min = v[i];
                ll m = 0;
                ll m1 = 0;
                for (ll k = i; k <= j; k++)
                {
                    if (max <= v[k])
                    {
                        max = v[k];
                        m = k;
                    }
                    if (min >= v[k])
                    {
                        min = v[k];
                        m1 = k;
                    }
                }
                ll p = abs(m - m1);
                s += p;
            }
        }
        cout << s << endl;
    }
    return 0;
}