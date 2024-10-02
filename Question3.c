#include<stdio.h>
int main()
{
    int i=5,j=7,k=4,m,n,p,q;
    m=i||j&&k;
    n=i&&j||k;
    p=i|j&k;
    q=i&j|k;
    printf("%d,%d,%d,%d",m,n,p,q);
}