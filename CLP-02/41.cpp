//Najmul Huda
#include<bits/stdc++.h>
using namespace std;
using vi = vector<int>;
void Decimal_To_Binary(int n) {
if (n > 1) {
Decimal_To_Binary(n / 2);
} cout << n % 2;
}
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
 int n; 
 cout << "Input a decimal number: "; 
 cin >> n; 
 cout << "Binary number equivalent to said decimal number is: "; 
Decimal_To_Binary(n); 
cout << endl;
return 0;
}