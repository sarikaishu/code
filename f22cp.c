#include <stdio.h>
int main ()
{
     int h,t,m,l,cp;
     scanf("%d%d%d%d",&h,&t,&m,&l);
     cp=h+t+m+l%400*100;
     printf("%d",cp);
     return 0;
     }
