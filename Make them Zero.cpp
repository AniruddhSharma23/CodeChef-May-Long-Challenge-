
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
        int n;
        cin >> n;
        int bit[32] = {};
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            int j = 0;
            while (x)
            {
                if (bit[j] == 0)
                {
                    bit[j] = x % 2;
                }
                x /= 2;
                j++;
            }
        }
        int k = 0;
        for (int i = 0; i < 32; i++)
        {
            k += bit[i];
        }
        cout << k << endl;
    }
    return 0;
}