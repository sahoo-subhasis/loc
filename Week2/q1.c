#include <stdio.h>

int findOccurance(int arr[], int n, int x)
{
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }
    return count;
}

void main()
{
    int arrayLength, i, num, occurance;
    printf("Enter Array Length");
    scanf("%d", &arrayLength);
    int array[arrayLength];
    for (i = 0; i < arrayLength; i++)
    {
        printf("enter %d element", i);
        scanf("%d", &array[i]);
    }
    printf("entre number to chekc occurance"); 
    scanf("%d", &num); 
    occurance = findOccurance(array, arrayLength, num);
    printf("occurance = %d", occurance);
}