#include <stdio.h>

void main() {
    int num, sum = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    do{
        remainder = num % 10;  
        sum += remainder;  
        num /= 10;  
    } while (num != 0);

    printf("The sum of digits is %d \n", sum);

}
