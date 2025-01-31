//Najmul Huda
#include<bits/stdc++.h>
using namespace std;
using vi = vector<int>;
int Octal_to_Decimal(int n, int base)
{
    int cnt = 0, mode, power = 0;
    while (n > 0)
    {
        mode = n % 10;
        cnt += mode * pow(base, power);
        power++;
        n /= 10;
    }
    return cnt;
}
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
//cout<<"Input an octal number (using digit 0 - 7) : ";
   int n;
   cin>>n;
  cout<<"Octal number: "<<n<<"\n";
  cout<<"The equivalent Decimal Number : ";
      cout<<Octal_to_Decimal(n,8);
return 0;
}