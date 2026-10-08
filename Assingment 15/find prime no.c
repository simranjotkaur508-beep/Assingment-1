#include<stdio.h>
int main()
{
    int a,b;
    for(a=2;a<=100;a++)
    for(a=2;b<=a;b++)
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