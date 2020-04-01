#include<stdio.h>
main()
{
    int x,y,s,m;
    printf("Enter the value of x+y :");
    scanf("%d",&s);
    printf("Eter the value of x-y :");
    scanf("%d",&m);
    s=x+y;
    m=x-y;
    x=(s+m)/2;
    y=(s-m)/2;
    printf("%d         %d",s,m);
    return 0;
}
