#include <stdio.h>
int main() {
    float catage, huage, newage, newage1, newage2;
    printf("What is the age of your cat?\n");
    scanf("%f", &huage);
    if (huage == 1) {
        printf("Your cat is 11 years old\n");
    }
    else{
        newage = huage*4;
        newage1 = newage-8;
        newage2 = newage1+22;
        printf("Your cat is %.2f years old\n", newage2);
    }

}