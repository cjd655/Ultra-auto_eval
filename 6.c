//202511716132
//2792131611@qq.com
//陈俊东
#include <stdio.h>
int main() {
    int arr[5], i,num;{
        do{scanf("%d",&num);
        }while (num % 2 !=0);
        arr[i] = num;
    }
    for(i = 0;i < 5;i++){
        printf("%d",arr[i]);
        if(i < 4)printf(" ");
    }
    printf("\n");
    return 0;
     }
