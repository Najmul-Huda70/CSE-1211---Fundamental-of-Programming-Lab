// Najmul Huda
#include <stdio.h>
#include<stdbool.h>
int main()
{
    int n;
    scanf("%d", &n);
    n++;
    bool flag = false;
    while(!flag)
    { 
        int k = n;
      if(flag) break;
      int arr[10];
      for(int i=0;i<10;i++) arr[i]=0;
      while(k)
      {
        arr[k%10]++;
        k/=10;
      }
      bool dup = false;
      for(int i=0;i<10;i++)
      {
          if(arr[i]>1) 
          {
            dup=true;
            break;
          }
      }
      if(!dup) 
      {
        printf("%d",n);
        flag = true;
        break;
      }
        n++;
    }
    

    return 0;
}