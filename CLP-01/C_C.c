// Najmul Huda
#include <stdio.h>
#include<stdbool.h>
int main()
{
    int n;
    scanf("%d", &n);
     int arr[n];
     bool flag = false;

     for(int i=0;i<n;i++)
     {
         scanf("%d", &arr[i]);
         if(arr[i]==1) flag =true;
     }
if(flag)   printf("HARD");
else printf("EASY");

    return 0;
}