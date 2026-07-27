#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<int> allPrimes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};

void solve ()
{
    int n, idx = 0;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;

    map<int, vector<int>> mp;
    for (auto x : v)
    {
        for (int i = 0; i < 11; i++)
        {
            if (x%allPrimes[i] == 0)
            {
                mp[allPrimes[i]].push_back (idx);
                break;
            }
        }
        idx++;
    }

    vector<int> ans (n);
    idx = 1;
    for (auto [x, y] : mp)
    {
        for (auto pos : y)
        {
            ans[pos] = idx;
        }
        idx++;
    }

    cout << mp.size() << endl;
    for (auto x : ans)
        cout << x << " ";
    cout << endl;
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