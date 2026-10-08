#include <stdio.h>
int main()
{
    int n,c,a,b;
    printf("enter a number");
    scanf("%d",&n); 
    while(n)
    {
        c=a+b;
        a=b;
        b=c;
        n--;
    }
    printf("%d",c);
    return 0;
}