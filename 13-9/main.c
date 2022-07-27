#include <stdio.h>
#include <stdlib.h>
int count=0;
int countD(int x)
{
    if(x==0)
        return count++;
    count++;
    return countD(x/10);
}
int main()
{
    int n;
    printf("Enter numbers : ");
    scanf("%d",&n);
    printf("Count of digits of number : %d",countD(n));
    return 0;
}
