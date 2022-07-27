#include <stdio.h>
#include <stdlib.h>
int factN(int x)
{
    if(x==1 || x==0)
        return 1;
    return  x * factN(x-1);
}
int main()
{
    int n;
    printf("Enter range : ");
    scanf("%d",&n);
    printf("Factorial of number : %d",factN(n)) ;
    return 0;
}
