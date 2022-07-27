#include <stdio.h>
#include <stdlib.h>
int oddN(int x)
{
    if(x==1 || x==0)
        return 0;
    if(x%2)
        return x+oddN(x-2);
    oddN(x-1);
}
int main()
{
    int n;
    printf("Enter range : ");
    scanf("%d",&n);
    printf("Sum of Odd numbers : %d",oddN(n)) ;
    return 0;
}
