#include <stdio.h>

void main()
{
    int i, arr1len, arr2len, arr3len; 
    printf("Enter Length of Arr1: "); 
    scanf("%d", &arr1len);
    int arr1[arr1len];
    for(i = 0; i < arr1len; i++)
    {
        printf("enter arr1 values: "); 
        scanf("%d", &arr1[i]);
    }
    printf("Enter Length of Arr2: "); 
    scanf("%d", &arr2len);
    int arr2[arr2len];
    for(i = 0; i < arr2len; i++)
    {
        printf("enter arr2 values: "); 
        scanf("%d", &arr2[i]);
    }
    arr3len = arr1len + arr2len; 
    int arr3[arr3len]; 
   
    for(i = 0; i < arr1len; i++)
        arr3[i] = arr1[i];
    for(i = 0; i < arr2len; i++)
        arr3[i + arr1len] = arr2[i];
  
    printf("The Reversed Array \n"); 
    
    for(i = arr3len; i >= 0; i--)
        printf("%d -- -\n", arr3[i]);
}