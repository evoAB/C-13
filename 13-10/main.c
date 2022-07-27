#include <stdio.h>
#include <stdlib.h>
int power(int base, int pow)
{
    if(pow==0)
        return 1;
    return base * power(base, pow-1);
}
int main()
{
    int m,n;
    printf("Enter base numbers : ");
    scanf("%d",&m);
    printf("Enter power number : ");
    scanf("%d",&n);
    printf("Result : %d",power(m,n));

    return 0;
}
