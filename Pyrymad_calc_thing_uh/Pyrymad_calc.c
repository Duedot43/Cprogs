#include<stdio.h>
#include<math.h>

int main() {
    float V, base_area, height;
    printf("Please input the base_area and height:\n");
    scanf("%f%f", base_area, height);
    V = (1/3) * base_area * height;
    V = round(V);
    return 0;
}