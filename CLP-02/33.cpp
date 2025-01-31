//Najmul Huda
#include<bits/stdc++.h>
using namespace std;
using vi = vector<int>;
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);

  int n;
    cout << "Input number of rows: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "  ";
        }
        int val = 1;
        for (int j = 0; j <= i; j++)
        {
            cout << val << "   ";
            val = val * (i - j) / (j + 1);
        }
        cout << endl;
    }
 
return 0;
}