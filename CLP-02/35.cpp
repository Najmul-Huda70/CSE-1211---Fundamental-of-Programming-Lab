//Najmul Huda
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
using vi = vector<int>;
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
 int n;
 cin>>n;
 int first = 0;
 int second = 1;
 cout<<"Here is the Fibonacci series upto to "<<n<<" terms : ";
 if(n==1) cout<<0<<endl;
 if(n>=2)cout<<first<<" "<<second<<" ";
for(int i=3;i<=n;i++)
{
    int third = first + second;
 cout<<third<<" ";
 first = second;
 second = third;
 }
return 0;
}