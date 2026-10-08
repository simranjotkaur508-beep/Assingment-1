#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter two numbers");
    scanf("%d %d ",&c,&d);
    for(a=2;a<=c;a++)
    for(a=2;b<=d;b++)
    {
        if(a%b==0)
        break;

        if(a==b)
        {
            printf("%d",a);
        }

    }
     return 0;
     

}