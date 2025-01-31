// Najmul Huda
#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
int fact(int n)
{
    long long f = 1;
    for (int i = 1; i <= n; i++)  f *= i;
    return f;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cout << "Input a number to check whether it is Strong number : ";
    cin >> n;
    int x = n;
    int sum = 0;
    while (n > 0)
    {
        int digit = n % 10;
        sum += fact(digit);
        n /= 10;
    }
    if (sum == x)
        cout << x << " is a Strong number." << endl;
    else
        cout << x << " is not a Strong number.";
    return 0;
}