#include <stdio.h>

void main() {
  int num;
  printf("Enter number to be checked \n");
  scanf("%d", &num);
  if (num == 0) {
    printf("Num is zero");
  } else if (num >= 0) {
    printf("Number is positive");
  } else {
    printf("Num is negative");
  }
}