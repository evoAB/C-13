#include <stdio.h>
#include <stdlib.h>
int evenN(int x)
{
    if(x==2 || x==0)
        return x;
    if(x%2==0)
        return x+evenN(x-2);
    evenN(x-1);
}
int main()
{
    int n;
    printf("Enter range : ");
    scanf("%d",&n);
    printf("Sum of Even numbers : %d",evenN(n)) ;
    return 0;
}
