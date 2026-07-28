#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    int n;
    cin >> n;
    map<ll, ll> mp;
    vector<int> v(n);
    for (auto &x : v)
    {
        cin >> x;
        mp[x]++;
    }

    map<ll, ll> fg;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j+=i)
        {
            fg[j] += mp[i];
        }
    }
    
    ll ans = 0;
    for (auto [x, y] : fg)
    {
        ans = max (y, ans);
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--)
        solve ();
    
    return 0;
}