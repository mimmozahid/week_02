#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int maxN = 3000 + 9;
vector<int> allPrime;

void sieve ()
{
    vector<bool> prime(maxN, true);
    for (int i = 2; i*i <= maxN; i++)
    {
        if (prime[i])
        {
            for (int j = i+i; j < maxN; j+=i)
            {
                prime[j] = false;
            }
        }
    }

    for (int i = 2; i <= maxN; i++)
    {
        if (prime[i])
            allPrime.push_back(i);
    }

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    sieve ();

    ll n;
    cin >> n;
    ll ans = 0;

    for (ll i = 1; i <= n; i++)
    {
        ll a = i;
        map<ll, ll> cnt;
        ll idx = 0;
    
        while (a > 1)
        {
            while (true)
            {
                if ((a%allPrime[idx]) != 0) break;
    
                cnt[allPrime[idx]]++;
                a/=allPrime[idx];
            }
            idx++;
        }

        if ((ll)cnt.size() == 2)
            ans++;
    }

    cout << ans << endl;
    
    return 0;
}