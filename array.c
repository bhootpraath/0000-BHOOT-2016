// FileName:Array_Macro.c
#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main() {
    int arr[MAX],sum = 0, i;
    printf("Enter no , of elements:");
    int count;
    scanf("%d",&count);
    for(i=0;i<count;i++) {
        arr[i] = i;
        sum += arr[i];
        printf("%d \n",sum);
    }
    printf("Array Sum : %d \n\n",sum);
    return 0;
}
