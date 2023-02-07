#include <stdio.h>

int main()
{
    float num,divided;
    printf("Please enter a number: ");
    scanf("%f",&num);
    printf("Divided by: ");
    scanf("%f",&divided);
    printf("Calculation result is: %.3f",num/divided);
    return 0;
}
