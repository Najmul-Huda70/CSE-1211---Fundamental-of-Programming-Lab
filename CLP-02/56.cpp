//Najmul Huda
#include<bits/stdc++.h>
using namespace std;
using vi = vector<int>;
bool isPrime(int n)
{
   for(int i=2;i*i<=n;i++)
   {
     if(n%i==0) {  return false;}
    }
    return true;
}
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
 int n;
 cin>>n;
 for(int i=1;i<n/2;i++)
 {
    if(isPrime(i))
    {
      if(isPrime(n-i)) cout<<n<<" = "<<i<<" + "<<n-i<<endl;
    }
  }
return 0;
}