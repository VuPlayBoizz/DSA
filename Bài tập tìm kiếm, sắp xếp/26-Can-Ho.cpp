
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n, m , k;
    cin >> n >> m >> k;
    int a[n], b[m];
    int ans = 0;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    for (int j = 1; j <= m; ++j)
    {
        cin >> b[j];
    }
    sort(a + 1 , a + 1 + n);
    sort(b + 1 , b + 1 + m);
    int i = 1, j = 1;
    while(i <= n && j <= m)
    {
        if (abs(a[i] - b[j]) <= k)
        {
            i++;
            j++;
            ans++;
        }
        else
        {
            if (a[i] < b[j] - k)
                i++;
            else
                j++;
        }
    }
    cout << ans << "\n";
    return 0;
}