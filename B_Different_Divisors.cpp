#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int maxN = 1e6 + 9;
vector<int> allPrime;

void sieve ()
{
    vector<bool> primes(maxN+1, true);
    primes[0] = false;
    primes[1] = false;
    for (ll i = 2; i*i <= maxN; i++)
    {
        for (ll j = i+i; j <= maxN; j+=i)
        {
            if (primes[j])
                primes[j] = false;
        }
        
    }
    
    for (int i = 2; i <= maxN; i++)
    {
        if (primes[i])
            allPrime.push_back(i);
    }
}

void solve ()
{
    auto value = [&](ll a)
    {
        return *lower_bound(allPrime.begin(), allPrime.end(), a);
    };

    ll n;
    cin >> n;

    ll p = value (n+1);
    ll q = value (p+n);

    cout << p*q << endl;
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