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
   int k = n;
   vi arr;
   while(k)
   {
    arr.push_back(k%10);
    k/=10;
   }
for(int i=0;i<arr.size();i++)
{
 cout<<arr[i];
 }  
    cout<< endl;
 
return 0;
}