// Najmul Huda
#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
string decimalToHexadecimal(int decimal)
{
    string hex = "";
    char hexDigits[] = "0123456789ABCDEF";
    while (decimal > 0)
    {
        int remainder = decimal % 16;
        hex = hexDigits[remainder] + hex;
        decimal /= 16;
    }
    return hex;
}
int main()
{
    int decimal;
    cout << "Input any Decimal number: ";
    cin >> decimal;
    string hexadecimal =
        decimalToHexadecimal(decimal);
    cout << "The equivalent Hexadecimal Number: "
         << hexadecimal << endl;
    return 0;
}