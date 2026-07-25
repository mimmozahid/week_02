#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 1e6 + 10;
vector<int> devisors(N);

void solve ()
{
    int n;
    cin >> n;
    cout << devisors[n] << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    for (int i = 1; i <= N; i++)
    {
        for (int j = i; j <= N; j+=i)
        {
            devisors[j]++;
        }
    }
    

    int t;
    cin >> t;
    
    while (t--)
        solve ();
    
    return 0;
}