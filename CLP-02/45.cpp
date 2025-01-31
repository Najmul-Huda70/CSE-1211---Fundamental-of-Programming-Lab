// Najmul Huda
#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a, b;
    cout << "Input 1st number for LCM: " << endl;
    cin >> a;
    cout << "Input 2nd number for LCM: " << endl;
    cin >> b;
    int mx = max(a, b);
    int ans = 0;
    for (int i = mx; i >= mx; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            ans = i;
            break;
        }
    }
    cout << "LCM of " << a << " and " << b << " is " << ans;
    return 0;
}