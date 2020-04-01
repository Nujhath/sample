#include<stdio.h>
#include<string.h>
main()
{
    char arr[50];
    int i=0, len;

    gets(arr);
    len = strlen(arr);

    if(arr[0] >= 'a' && arr[0] <= 'z'){
                arr[0] = arr[0]-32;
    }

    for( ; i<len; i++){
        if(arr[i] == ' '){
            if(arr[i+1] >= 'a' && arr[i+1] <= 'z'){
                arr[i+1] = arr[i+1]-32;

                }
                printf("%c", arr[i]);
        }
        else
            printf("%c",arr[i]);

    }

    return 0;
}
