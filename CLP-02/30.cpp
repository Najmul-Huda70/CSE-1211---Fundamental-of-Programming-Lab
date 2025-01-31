//Najmul Huda
#include<bits/stdc++.h>
using namespace std;
using vi = vector<int>;
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
 int a,b;
 cout<<"Input starting number of range: ";
 cin>>a;
 cout<<"Input ending number of range :  ";
 cin>>b;
 for(int n=a;n<=b;n++)
 {
    int k=n;
  int digit = log10(k)+1;
  int sum = 0;
  if(digit==1 && n!=1) continue;
  while(k)
  {
    if(k%10>0) sum+= pow(k%10,digit);
    k/=10;
  }
  if(sum==n) cout<<n<<" ";
 }
return 0;
}