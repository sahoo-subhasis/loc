#include <stdio.h>

void main(){
    int arr1len, i; 
    printf("Enter Length of Array1: "); 
    scanf("%d", &arr1len);
    int arr1[arr1len], arr2[arr1len];
    for(i = 0; i < arr1len; i++)
    {
        printf("enter arr1 values: "); 
        scanf("%d", &arr1[i]);
    }
    for(i = 0; i < arr1len; i++)
    {
        arr2[i] = arr1[i];
    }
    printf("modifed array becomes : \n"); 
    for(i = 0; i < arr1len; i++)
    {
        printf("%d", arr2[i]);
    }
}