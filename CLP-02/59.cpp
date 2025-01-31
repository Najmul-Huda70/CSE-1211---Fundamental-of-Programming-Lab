//Najmul Huda
#include<bits/stdc++.h>
using namespace std;
using vi = vector<int>;
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
 
   int n;
   cin>>n;
   int k=n;
  int digit = log10(n)+1;
  int sum = 0;
  while(n)
  {
    sum+= pow(n%10,digit);
    n/=10;
  }
  if(sum==k) cout<<k<<" is an Armstrong number";
  else    cout<<k<<" is not an Armstrong number";

return 0;
}