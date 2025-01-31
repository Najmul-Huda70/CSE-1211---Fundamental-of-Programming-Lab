// Najmul Huda
#include <stdio.h>
int main()
{
    int n,cnt=1;
    scanf("%d", &n);
     int first ;
      scanf("%d", &first);
   n--;
   while(n--)
   {
      int val;
       scanf("%d", &val);
       if(val != first) 
       {
         cnt++;
         first=val;
       }
   }
    printf("%d",cnt);

    return 0;
}