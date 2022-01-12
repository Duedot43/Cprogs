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
   
  printf("\n Perimeter of Traiangle = %.2f\n", Perimeter);
  printf("\n Semi Perimeter of Traiangle = %.2f\n",s);
  printf("\n Area of triangle = %.2f\n",Area);

  return 0;
}