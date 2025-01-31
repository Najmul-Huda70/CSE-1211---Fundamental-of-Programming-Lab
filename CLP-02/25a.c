// Najmul Huda
#include <stdio.h>
int main()
{
    int n;
    printf("Input the number of terms :");
    scanf("%d", &n);
   int sum = 0;
   int arr[n];
   for(int i=1;i<=n;i++)
   {
     arr[i-1] = i*i;
     sum+=i*i;
   }
  printf("The square natural upto %d terms are :",n);
   for(int i=0;i<n;i++)
   {
     printf("%d ",arr[i]);
   }
    printf("\n");
    
 printf("The Sum of Square Natural Number upto %d terms =%d",n,sum);
    return 0;
}
