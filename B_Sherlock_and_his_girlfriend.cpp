#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    ++n;
    
    vector<int> col(n+1, 1);
    int col_need = 1;

    for (int i = 2; i <= n; i++)
    {
        if (col[i] == 1)
        {
            for (int j = i+i; j <= n; j+=i)
            {
                col[j] = 2;
                col_need = max (col_need, col[j]);
            }
        }
    }
    
    cout << col_need << endl;
    for (int i = 2; i <= n; i++)
    {
        cout << col[i] << " ";
    }
    cout << endl;
    
    return 0;
}