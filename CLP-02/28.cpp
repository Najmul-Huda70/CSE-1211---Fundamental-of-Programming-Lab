//Najmul Huda
#include<bits/stdc++.h>
using namespace std;
using vi = vector<int>;
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
   int start,end;
   cin>>start;
  cin>>end;
   cout<<"The Perfect numbers within the given range : ";
   for(int n=start;n<=end;n++)
   {  if(n==1) n++;
   int sum = 0;
    vector<int>v;
    v.push_back(1);
    for(int i=2;i*i<n;i++)
    {   
        if(n%i==0)
        {     v.push_back(i);
             if(n/i != i)
             {  v.push_back(n/i);    } }  }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++) sum+=v[i];  
     if(sum==n) cout<<n<<" ";
    }
return 0;
}
