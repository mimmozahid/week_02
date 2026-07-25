#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v) cin >> x;

    map <int, int> cnt;

    for (int i = 0; i < n; i++)
    {
        for (int j = 2; j*j <= v[i]; j++)
        {
            while (v[i]%j == 0)
            {
                cnt[j]++;
                v[i]/=j;
            }
        }
        
        if (v[i] > 1)
            cnt[v[i]]++;
    }
    
    bool flg = true;

    for (auto [a, b] : cnt)
    {
        if (b%n != 0)
        {
            flg = false;
            break;
        }
    }

    if (flg ) cout << "YES" << endl;
    else cout << "NO" << endl;
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