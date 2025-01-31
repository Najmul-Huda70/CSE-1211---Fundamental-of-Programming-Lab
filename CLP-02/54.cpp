//Najmul Huda
#include<bits/stdc++.h>
using namespace std;
using vi = vector<int>;
int octalToDecimal(int octal) {
int decimal = 0, place = 0; while (octal > 0) {
int digit = octal % 10;
decimal += digit * pow(8, place);
octal /= 10;
place++;
}
return decimal;
}
string decimalToBinary(int decimal)
{
string binary = "";
while (decimal > 0)
{
binary = to_string(decimal % 2) + binary;
decimal /= 2;
}
return binary;
}
int main()
{
int octal;
cout << "Input an octal number (using digit 0 -7): ";
cin >> octal;
int decimal = octalToDecimal(octal);
string binary = decimalToBinary(decimal);
cout << "The Octal Number: " << octal << endl;
cout << "The equivalent Binary Number: " <<
binary << endl;
return 0;
}