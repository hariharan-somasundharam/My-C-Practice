#include<stdio.h>
int main()
{
    int i,j,sum=-1;
   for(i=0;i<5;i++)
   {
    for(j=0;j<=i;j++)
    {
        sum+=i+j++;
        printf("iter %d\n j val%d\n sum %d\n",i,j,sum);
    }
   }
    printf("%d",sum);
}