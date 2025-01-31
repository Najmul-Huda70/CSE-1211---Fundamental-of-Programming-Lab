// Najmul Huda
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
     char arr[4]={'a','a','b','b'};
     int k=0;
     while(k<n)
     {   
         printf("%c",arr[k%4]);
        k++;
     }
   

    return 0;
}