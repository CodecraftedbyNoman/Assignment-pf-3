#include <stdio.h>

int main() {
    int Maths, Science;

    printf("Enter Marks of Maths: ");
    scanf("%d", &Maths);

    printf("Enter Marks of Science: ");
    scanf("%d", &Science);
    if (Maths >= 50 && Science >= 50) {
        printf("You are eligible for admission");
        if (Maths >= 80 && Science >= 80) {
            printf(" and Scholarship\n");
        } else {
            printf("\nYou do not qualify for a Scholarship\n");
        }
    } else {
        printf("You are not eligible for admission and Scholarship\n");
    }

    return 0;
}
