// Najmul Huda
#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
int fact(int n)
{
    long long f = 1;
    for (int i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a, b;
    cout << "Input starting range of number :"<<endl;
     cin>>a;
      cout<<" Input ending range of number : "<<endl;
       cin>>b; 
       cout<<" The Strong numbers are : "<<endl; 
    for(int i=a; i<=b; i++) {                                                                                                                int n = i;
    int x = n;
    int sum = 0;
    while (n > 0)
    {
        int digit = n % 10;
        sum += fact(digit);
        n /= 10;
    }
    if (sum == x)
        cout << x << " ";
}

return 0;
}