#include<stdio.h>
#include<math.h>

int main()
{
  float a, b, c, Perimeter, s, Area;
  
  printf("\nPlease Enter two sides of triangle\n");
  scanf("%f%f",&a,&b);
   
    c = a*a+b*b;
    printf("%.2f\n",c);
    c = sqrt(c);
    printf("%.2f",c);
   
    Perimeter = a+b+c;
    printf("The perimeter of the triangle is: %.2f\n", Perimeter);
    Area = 1/2*a*b;
    printf("The area of the triangle is: %.2f\n", Area);

  return 0;
}