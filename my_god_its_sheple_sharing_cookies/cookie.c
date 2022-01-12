#include<stdio.h>
#include<math.h>

int main()
{
  float people, cookies, x, y;
  
    printf("\nPlease Enter number of shepl- uh i mean people\n");
    scanf("%f",&people);
    printf("\nPlease Enter number of cookies\n");
    scanf("%f",&cookies);
    
    printf("%.2f\n",people);
    
    printf("%.2f\n",cookies);
    x = cookies/people;
    x = round(x);
    y = cookies-(people*x);
    
    printf("Cookies per person %.2f\n", x);
    
    printf("Cookies left: %.2f\n", y);

  return 0;
}