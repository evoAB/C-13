#include <stdio.h>
#include <stdlib.h>
int digitN(int x)
{
    if(x==0)
        return x;
    return x%10 + digitN(x/10);
}
int main()
{
    int n;
    printf("Enter range : ");
    scanf("%d",&n);
    printf("Sum of Digits of a numbers : %d",digitN(n)) ;
    return 0;
}
