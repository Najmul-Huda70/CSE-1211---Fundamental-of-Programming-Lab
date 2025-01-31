// Najmul Huda
#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long binary;
    int decimal = 0, i = 0, digit;
    cout << "Input the binary number: ";
    cin >> binary;
    cout << "The Binary Number: " << binary << endl;
    for (long long temp = binary; temp > 0; temp /= 10)
    {
        digit = temp % 10;
        decimal += digit * pow(2, i);
        ++i;
    }
    cout << "The equivalent Decimal Number is: " << decimal << endl;
    return 0;
}