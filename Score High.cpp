
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
        for (ll i = 0; i < 4; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        ll m = *max_element(v.begin(), v.end());
        cout << m << endl;
    }
    return 0;
}