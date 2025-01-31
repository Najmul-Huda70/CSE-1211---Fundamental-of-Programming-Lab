// Najmul Huda
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int cnt=0;
    for(int i=0;i<n;i++)
    {
         int a,b;
         scanf("%d%d", &a,&b);
         if(b-a>=2) cnt++;
    }
    printf("%d",cnt);

    return 0;
}