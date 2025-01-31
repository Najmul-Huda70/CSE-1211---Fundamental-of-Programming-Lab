//Najmul Huda
#include<bits/stdc++.h>
using namespace std;
using vi = vector<int>;
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
 int start ,end;
 cin>>start>>end;
 vi v;
 for(int n=start;n<=end;n++)
 {
    bool flag = true;
   for(int i=2;i*i<=n;i++)
   {
     if(n%i==0)
     {
        flag = false; break;
     }
    }
      if(flag) v.push_back(n);
  }
  cout<<"The prime number between "<<start<<"and "<<end<<" are :";
for(int i=0;i<v.size();i++)
{
 cout<<v[i]<<" ";
 }
return 0;
}