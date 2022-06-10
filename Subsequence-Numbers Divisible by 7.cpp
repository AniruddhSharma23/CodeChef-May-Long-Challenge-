
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
        const ll M = 1e9 + 7;
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<vector<ll>> dp(n + 1, vector<ll>(7));
        dp[0][0] = 1;
        for (ll i = 0; i < n; i++)
        {
            ll l = (ll)to_string(v[i]).size();
            ll p = 1;
            while (l--)
            {
                p *= 10;
            }
            for (ll j = 0; j < 7; j++)
            {
                ll k = ((j * p) + v[i]) % 7;
                dp[i + 1][j] = (dp[i + 1][j] + dp[i][j]) % M;
                dp[i + 1][k] = (dp[i + 1][k] + dp[i][j]) % M;
            }
        }
        cout << (dp[n][0] - 1 + M) % M << endl;
    }
    return 0;
}