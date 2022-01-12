#include<stdio.h>
int main() {
    float score, score2, out;
    printf("Please put the first part of your fraction grade(->1/5):\n");
    scanf("%f", &score);
    printf("Please input the second part of your fraction grade(1/5<-):\n");
    scanf("%f", &score2);
    out = score/score2;
    if (out > .92) {
        printf("Your letter grade is an A\n");
    }
    if (out > .89) {
        printf("Your letter grade is an A-\n");
    }
    if (out > .86) {
        printf("Your letter grade is an B+\n");
    }
    if (out > .82) {
        printf("Your letter grade is an B\n");
    }
    if (out > .79) {
        printf("Your letter grade is an B-\n");
    }
    if (out > .76) {
        printf("Your letter grade is an C+\n");
    }
    if (out > .72) {
        printf("Your letter grade is an C\n");
    }
    if (out > .69) {
        printf("Your letter grade is an C-\n");
    }
    if (out > .66) {
        printf("Your letter grade is an D+\n");
    }
    if (out > .62) {
        printf("Your letter grade is an D\n");
    }
    if (out > .59) {
        printf("Your letter grade is an D-\n");
    }
    if (out < .58) {
        printf("Your letter grade is an F\n");
    }

}