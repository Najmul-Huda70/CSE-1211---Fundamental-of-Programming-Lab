//Najmul Huda
#include<bits/stdc++.h>
using namespace std;
using vi = vector<int>;
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
 int a,b,c;
  cout<<"Input the first number of the G.P.series: "<<endl; 
  cin>>a; 
  cout<<"Input the number of items for the G.P.series: "<<endl; cin>>b;
cout<<"Input the common ratio of G.P. series:"<<endl;
 cin>>c;
  int ans=a,sum=0;
   for(int i=0; i<b; i++) {
double x=a*pow(c,i);
 cout<<x<<" "; sum+=x;
} 
cout<<"The Sum of the G.P. series : "<<" "<<sum; 
return 0;
}