int main()
{
    int a=-1,b=1,c,num;
    printf("Enter a number");
    scanf("%d",&num);
    while(1)
    {
        c=a+b;
        if(c>=num)
            break;
        a=b;
        b=c;
    }
    if(c==num)
        printf("%d is in the series",num);
    else
        printf("%d is not in the series",num);
    printf("\n");
    return 0;
}
