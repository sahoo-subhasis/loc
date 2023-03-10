#include <stdio.h>

void main() {
  float r, diameter, circumference, area;
  const float PI = 3.14;

  printf("Enter radius of circle");
  scanf("%f", &r);

  diameter = 2 * r;
  circumference = 2 * PI * r;
  area = PI * r * r;

  printf("diameter  is %f \n", diameter);
  printf("circumference   is %f \n", circumference);
  printf("area   is %f \n", area);
}
