#include<stdio.h>
main()
{
    int a[5], i;

    printf("Enter the elements in array:");

    for(i = 0; i < 5; i++){
        scanf("%d", &a[i]);
    }

    printf("The elements are:");

    for(i = 0; i < 5; i++){
        printf("%d, ", a[i]);
    }
    return 0;



}


