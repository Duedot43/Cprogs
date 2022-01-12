#include<stdio.h>
#include<math.h>

int main() {
    float V, base_area, height;
    printf("Please input the base_area:\n");
    scanf("%f", &base_area);
    printf("Please input the height:\n");
    scanf("%f", &height);
    V = (base_area * height)/3;
    V = round(V);
    printf("the height of the pyrymad is %.2f and the base_area is %.2f\n", height, V);
    return 0;
}