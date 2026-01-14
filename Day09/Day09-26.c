#include <stdio.h>

int main() {
    int h, t;
    float c;

    scanf("%d %f %d", &h, &c, &t);

    int cond1 = h > 50;
    int cond2 = c < 0.7;
    int cond3 = t > 5600;

    int grade;

    if (cond1) {
        if (cond2) {
            if (cond3) {
                grade = 10;
                printf("The grade of the steel is: %d\n", grade);
                printf("All of the conditions met.");
            } 
            else {
                grade = 9;
                printf("The grade of the steel is: %d\n", grade);
                printf("Two conditions met.");
            }
        } 
        else {
            if (cond3) {
                grade = 7;
                printf("The grade of the steel is: %d\n", grade);
                printf("Two conditions met.");
            } 
            else {
                grade = 6;
                printf("The grade of the steel is: %d\n", grade);
                printf("Only one condition met.");
            }
        }
    } 
    else {
        if (cond2) {
            if (cond3) {
                grade = 8;
                printf("The grade of the steel is: %d\n", grade);
                printf("Two conditions met.");
            } 
            else {
                grade = 6;
                printf("The grade of the steel is: %d\n", grade);
                printf("Only one condition met.");
            }
        } 
        else {
            if (cond3) {
                grade = 6;
                printf("The grade of the steel is: %d\n", grade);
                printf("Only one condition met.");
            } 
            else {
                grade = 5;
                printf("The grade of the steel is: %d\n", grade);
                printf("None of the conditions met.");
            }
        }
    }

    return 0;
}

// If-Else_Steel Grade Classification