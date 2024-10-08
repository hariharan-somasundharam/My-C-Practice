#include<stdio.h>
int main()
{
    static int c=0;
    c++;
    if(c<5)
        main();
    printf("%d",c);
}