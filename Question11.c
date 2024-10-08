#include<stdio.h>
int main()
{
    int i,j,sum;
    for(i=0;i<5;i++)
    {
        for(j=i,sum=0;j<=i;j++)
            sum+=j;
    }
    printf("%d",sum);
}