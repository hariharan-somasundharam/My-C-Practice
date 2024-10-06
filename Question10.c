#include<stdio.h>
int main()
{
    int i=3,j=1;
    switch(i)
    {
        case 3:
            i++;
        default:
            i=i*3+i--;
        case 0:
            printf("%d",i);
        case 1:
            break;
        case 2:
            i=i/i--;
    }
    printf("%d",i);
}