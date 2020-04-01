#include<stdio.h>
main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n>0){
        printf("The number is positive");

    }
    else if(n<0){
        printf("The number is negative");
    }

    else{
        printf("The number is zero");
    }
    /*I used else here. we also can use else if statement for the zero condition. If a first number is not greater or smaller than the second number then
    the numbers must be equal. so it's not that important to use if else statement.     */

    return 0;
}
