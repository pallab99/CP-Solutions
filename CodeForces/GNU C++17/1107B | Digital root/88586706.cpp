#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll Digital_root(ll n, ll x)
{
    return (n - 1) * 9 + x;
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n, x;
        cin >> n >> x;
        cout << Digital_root(n, x) << endl;
    }
}