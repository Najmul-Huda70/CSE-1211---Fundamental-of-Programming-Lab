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
  bool flag = true;
   for(int i=2;i*i<n;i++)
   {
     if(n%i==0)
     {
        flag = false;
        break;
     }
    }
      
   if(flag) cout<<n<<" is a prime number.\n";
 else  cout<<n<<" is not a prime number.\n";
 
return 0;
}