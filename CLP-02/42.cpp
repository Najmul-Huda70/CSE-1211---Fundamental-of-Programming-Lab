// Najmul Huda
#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long bin;
    cout << "Input a binary number: ";
    cin >> bin;
    long long decimal = 0;
    int power = 0;
    for (long long i = bin; i > 0; i /= 10)
    {
        int digit = i % 10;
        decimal += digit * pow(2, power);
        power++;
    }
    cout << "The Binary Number: " << bin << endl;
    cout << "The equivalent Decimal Number: " << decimal
         << endl;
    return 0;
}