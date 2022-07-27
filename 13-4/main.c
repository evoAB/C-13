#include <stdio.h>
#include <stdlib.h>
int squN(int x)
{
    if(x==1 || x==0)
        return x;
    return x*x + squN(x-1);
}
int main()
{
    int n;
    printf("Enter range : ");
    scanf("%d",&n);
    printf("Sum of Squares of numbers : %d",squN(n)) ;
    return 0;
}
