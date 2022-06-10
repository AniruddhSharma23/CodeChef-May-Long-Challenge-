
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
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        int k = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (v[i] != 0)
            {
                k = i;
                break;
            }
        }
        cout << k << endl;
    }
    return 0;
}