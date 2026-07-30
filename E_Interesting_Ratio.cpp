#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int maxN = 1e7 + 10;
vector<bool> prime(maxN, true);
vector<int> allPrimes;

void sieve ()
{
    for (ll i = 2; i*i <= maxN; i++)
    {
        if (prime[i])
        {
            for (ll j = i+i; j <= maxN; j+=i)
            {
                prime[j] = false;
            }
        }
    }

    for (ll i = 1; i <= maxN; i++)
    {
        if (prime[i])
            allPrimes.push_back (i);
    }
}

void solve ()
{
    int n;
    cin >> n;

    ll ans = 0;
    for (int i = 2; i <= n; i++)
    {
        if (prime[i])
            ans += (n/i);
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    sieve ();

    int t;
    cin >> t;
    
    while (t--)
        solve ();
    
    return 0;
}