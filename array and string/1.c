#include <stdio.h>

int main()
{
    char line[100];
    float num,divided;
    printf("Please enter a number: ");
    fgets(line,sizeof(line),stdin);
    sscanf(line,"%f",&num);
    
    printf("Divided by: ");
    fgets(line,sizeof(line),stdin);
    sscanf(line,"%f",&divided);
    printf("Calculation result is: %.3f",num/divided);
    return 0;
}
