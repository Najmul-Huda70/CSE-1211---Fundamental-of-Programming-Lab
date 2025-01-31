// Najmul Huda
#include <stdio.h>
int main()
{
    int n;
     printf("Input the number of terms : ");   
    scanf("%d", &n);
    int arr[n];
    int sum = 0;
    arr[0] = 1;
    int m = 1;
   for(int i=1;i<n;i++)
   {  m*=10;
   m++;
     arr[i] = m;
     
   }
  
    for(int i=0;i<n;i++)
   {
     printf("%d",arr[i]);
     sum+=arr[i];
     if(i != n-1) printf(" + ");
      }
    printf("\nThe Sum is : %d\n",sum);

    return 0;
}