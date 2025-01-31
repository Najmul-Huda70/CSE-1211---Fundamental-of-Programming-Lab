// Najmul Huda
#include <stdio.h>
 int main()
{
    int a,b;
    printf("Input 1st number for LCM: ");
    scanf("%d", &a);
     printf("Input 2nd number for LCM: ");
    scanf("%d", &b);
    int lcm;
    if(a>b) lcm=a;
    else lcm = b;
    while(!(lcm%a==0 && lcm%b==0))
    {
        lcm++;
    }
   
    printf("The LCM of %d and %d is : %d",a,b,lcm);

    return 0;
}