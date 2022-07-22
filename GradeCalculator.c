#include <stdio.h>

int main()
{
    float x;
    float y;
    float z;

    printf("Correct Questions: ");
    scanf("%f", &x);

    printf("Total Answers: ");
    scanf("%f", &y);

    x/=y;
    y = x * 100;

    printf("Total Correct: %.2f\n", x);
    scanf("");
    
}