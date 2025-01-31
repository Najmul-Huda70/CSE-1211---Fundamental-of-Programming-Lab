// Najmul Huda
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
   while(n--)
   {
    int l,r,d;
    scanf("%d%d%d", &l,&r,&d);
    int less = l-l%d;

    int gret = r;
    if((d-r%d)>d) gret+=d;
    else gret+=(int)(d-r%d);

    if(d<l) printf("%d\n",d);
    else if(less>0 && less<l)  printf("%d\n",less);
else if(gret>r)  printf("%d\n",gret);
   }

    

    return 0;
}