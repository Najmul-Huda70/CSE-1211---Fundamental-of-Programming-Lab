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
 for(int i=1;i<=n;i++)
 {
    int space = n-i;
    for(int j=0;j<space;j++)
    {
      cout<<" ";
     }
   for(int j=1;j<=i;j++)
   {
    cout<<j;
    }
    for(int j=i-1;j>0;j--)
    {
       cout<<j;
     }
     cout<<endl;
  }
return 0;
}