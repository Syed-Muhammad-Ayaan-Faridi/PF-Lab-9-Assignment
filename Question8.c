#include <stdio.h>
int main(){
    int arr[8] = {10,20,30,40,50,60,70}; 
    int *pointer = arr;
    printf("*pointer %d\n",*pointer);
    *pointer = *(pointer+3);
    printf("*(pointer+3) %d\n",*pointer);
    *pointer = pointer[2];
    printf("pointer[2] %d\n",*pointer);
    *pointer = *(pointer+4);
    printf("*pointer + 4  %d\n",*pointer);
    // printf("*pointer[1]  %d\n",pointer[1]);
    int *pointer2 = &arr[5];
    printf("&arr[6] %d\n",*pointer2);
    printf("pointer2[-2] %d\n",pointer2[-2]);
    // printf("pointer2[6] %d\n",*pointer2);
    return 0;
}