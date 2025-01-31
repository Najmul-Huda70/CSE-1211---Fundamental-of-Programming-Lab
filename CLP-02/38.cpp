//Najmul Huda
#include<bits/stdc++.h>
using namespace std;
using vi = vector<int>;
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
string s;
cin>>s;
string p=s;
reverse(s.begin(),s.end());
if(p==s) cout<<p<<" is a palindrome number."<<endl;
else cout<<p<<" is not a palindrome number"<<endl;

return 0;
}