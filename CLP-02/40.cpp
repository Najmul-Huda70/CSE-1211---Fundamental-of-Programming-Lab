//Najmul Huda
#include<bits/stdc++.h>
using namespace std;
using vi = vector<int>;
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
// cout<<int('A')<<endl;
int n;
   cin>>n;
   for(int i=1;i<=n;i+=2)
   {
      int space = (n-i);
      for(int i=0;i<space;i++) cout<<" ";
       int div2 = i/2 + 1;
       for(int j=0;j<div2;j++)
       {
        char ch = 'A' + j;
        cout<<ch<<" ";
        }
        for(int j=div2-2;j>=0;j--)
       {
        char ch = 'A' + j;
        cout<<ch<<" ";
        }
        cout<<"\n";
    }
return 0;
}