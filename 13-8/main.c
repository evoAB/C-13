#include <stdio.h>
#include <stdlib.h>
int s1=0,s2=1,s3;
void fiboN(int x)
{
    if(x>0)
    {
        s3=s1+s2;
        s1=s2;
        s2=s3;
        printf("%d ",s1);
        fiboN(x-1);
    }
}
int main()
{
    int n;
    printf("Enter numbers : ");
    scanf("%d",&n);
    printf("Fibonacci numbers series : ");
    fiboN(n);
    return 0;
}
