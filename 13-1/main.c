#include <stdio.h>
#include <stdlib.h>

int printN(int a)
{
    int y=0;
    if(a==0)
        return 0;
    return a+printN(a-1);
}

int main()
{
    int n;
    printf("Enter input : ");
    scanf("%d",&n);
    printf("Sum Natural Numbers : %d",printN(n));
    return 0;
}
