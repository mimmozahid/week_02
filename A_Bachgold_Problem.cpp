#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int maxN = 1e5 + 9;
vector<int> allPrime;

void sieve ()
{
    vector<bool> primes(maxN, true);
    for (int i = 2; i*i <= maxN; i++)
    {
        for (int j = i+i; j <= maxN; j+=i)
        {
            if (primes[j])
                primes[j] = false;
        }
        
    }
    
    for (int i = 2; i < maxN; i++)
    {
        if (primes[i])
            allPrime.push_back(i);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    sieve ();

    int n;
    cin >> n;

    if (n%2 == 0)
    {
        int a = n/2;
        cout << a << endl;
        for (int i = 0; i < a; i++)
        {
            cout << 2 << " ";
        }
        cout << endl;
    }
    else
    {
        int a = n/2;
        cout << a << endl;
        for (int i = 0; i < a-1; i++)
        {
            cout << 2 << " ";
        }
        cout << 3 << endl;
    }
    
    return 0;
}