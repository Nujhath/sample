#include<stdio.h>
main()
{
    int a, n, d, s;
    printf("Enter the first value and the difference:");
    scanf("%d %d", &a, &d);
    printf("Enter the last number:");
    scanf("%d", &n);

    s = (n * (2*a + (n-1)*d))/2;
    printf("%d", s);
    return 0;

}
