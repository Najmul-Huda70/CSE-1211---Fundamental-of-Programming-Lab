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
    cout << "Input 1st number for HCF: " << endl;
    cin >> a;
    cout << "Input 2nd number for HCF: " << endl;
    cin >> b;
    int mn = min(a, b);
    int ans = 0;
    for (int i = 1; i <= mn / 2; i++)
    {
        if (a % i == 0 && b % i == 0)
      ans = i;
    }
    cout << "HCF of " << a << " and " << b << " is " << ans;
    return 0;
}