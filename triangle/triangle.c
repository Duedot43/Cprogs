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
    printf("%.2f\n",c);
   
    Perimeter = a+b+c;
    printf("The perimeter of the triangle is: %.2f\n", Perimeter);
    Area = (a*b)/2;
    printf("The area of the triangle is: %.2f\n", Area);
    printf("The slant side is: %.2f\n", c);

  return 0;
}