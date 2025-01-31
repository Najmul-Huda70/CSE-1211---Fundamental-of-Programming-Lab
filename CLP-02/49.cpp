// Najmul Huda
#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a, b, c;
    cout << "Input the starting number of the A.P.series: " << endl;
    cin >> a;
    cout << "Input the number of items for the A.P.series: " << endl;
    cin >> b;
    cout << "Input the common difference of A.P.series: " << endl;
    cin >> c;
    int ans = a, sum = 0;
    for (int i = a; i <= b; i++)
    {
        if (i != b)
            cout << i << " + ";
        else
            cout << i << " =";
        sum += ans;
        ans = ans + c;
    }
    cout << " " << sum;
    return 0;
}