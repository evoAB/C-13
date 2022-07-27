#include <stdio.h>
#include <stdlib.h>
int hcfN(int x, int y)
{
    while(x!=y)
        if(x>y)
            return hcfN(x-y,y);
        else
            return hcfN(x,y-x);
    return x;
}
int main()
{
    int m,n;
    printf("Enter two numbers : ");
    scanf("%d%d",&m,&n);
    printf("HCF of two numbers : %d",hcfN(m,n)) ;
    return 0;
}
