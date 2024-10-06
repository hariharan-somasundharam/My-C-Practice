#include<stdio.h>
int main()
{
    int p=8,q=8;
    p=(p==q)? --q : q+p--;
    printf("%d %d",p,q);
}