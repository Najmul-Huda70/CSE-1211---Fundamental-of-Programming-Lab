 // Najmul Huda
 #include <stdio.h>
 #include <bits/stdc++.h>
 using namespace std;
 int main()
 {    int n;
      printf("Input the number : ");
     scanf("%d", &n);
    int sum = 0;
    vector<int>v;
    v.push_back(1);
    for(int i=2;i*i<n;i++)
    {      if(n%i==0)
        {     v.push_back(i);
             if(n/i != i)  v.push_back(n/i);         
        }
    }
    sort(v.begin(),v.end());
     printf("The positive divisor : ");
    for(auto val : v)
    {
        cout<<val<<" "; sum+=val;
    }
    cout<<endl;
     printf("The sum of the divisor is : %d",sum);
 if(sum==n) cout<<"\nso, the number is perfect"<<endl;
 else cout<<"\nso, the number is not perfect"<<endl;
     return 0;
 }