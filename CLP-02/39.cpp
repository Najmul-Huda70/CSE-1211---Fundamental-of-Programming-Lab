//Najmul Huda
#include<bits/stdc++.h>
using namespace std;
using vi = vector<int>;
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
 int start,end;
// cout<<"start & end : ";
 cin>>start>>end;
//cout<<"divisible: ";
int k;
cin>>k;
int s=0;
cout<<"Number between "<<start<<" and "<<end<<" divisible by "<<k<<" :";
for(int i=start;i<=end;i++)
{
   if(i%k==0)
   {
    cout<<i<<" ";
    s+=i;
   }
 }
 cout<<"\nsum: "<<s<<endl;
return 0;
}