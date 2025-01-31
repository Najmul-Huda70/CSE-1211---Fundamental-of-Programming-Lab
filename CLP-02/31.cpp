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
   for(int i=1;i<=n;i+=2)
   {
      int space = (n-i)/2;
      for(int i=0;i<space;i++)  cout<<" ";
       for(int j=0;j<i;j++) cout<<"*";
        cout<<"\n";
    }
 for(int i=n;i>0;i-=2)
   {
      int space = (n-i)/2;
      for(int i=0;i<space;i++) cout<<" ";
       for(int j=0;j<i;j++) cout<<"*";
        cout<<"\n";
    }
   cout<< endl;
return 0;
}