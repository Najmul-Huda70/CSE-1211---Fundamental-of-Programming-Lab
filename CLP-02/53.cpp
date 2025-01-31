//Najmul Huda
#include<bits/stdc++.h>
using namespace std;
using vi = vector<int>;
int binaryToDecimal(long long binary) {
int decimal = 0, i = 0, remainder;
while (binary != 0)
{
remainder = binary % 10;
binary /= 10;
decimal += remainder * pow(2, i);
++i;
}
return decimal;
}
int decimalToOctal(int decimal)
{
int octal = 0, place = 1;
while (decimal != 0)
{
int remainder = decimal % 8;
octal += remainder * place;
decimal /= 8;
place *= 10;
}
return octal;
}
int main()
{
long long binary;
cout << "Input a binary number: ";
cin >> binary;
int decimal = binaryToDecimal(binary); int octal = decimalToOctal(decimal);
cout << "The Binary Number: " << binary << endl; cout << "The equivalent Octal Number: " <<
octal << endl;
return 0;
}