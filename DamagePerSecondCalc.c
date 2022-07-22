#include <stdio.h>

int main()
{
    //Make Variables
    float x;
    float y;

    
    printf("Anime Game Damage Calculator\n");

    printf("Damage: ");
    scanf("%f", &x);

    printf("Attack Speed: ");
    scanf("%f", &y);

    x/=y;

    printf("Attack Per Second: %f\n", x);
    scanf("");
}