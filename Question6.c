#include<stdio.h>
int main()
{
    int i=10,j=4,k;
    i=++i + j--;
    k=i++;
    k=--k * ++j;
    printf("%d%d%d",i,j,k);
}