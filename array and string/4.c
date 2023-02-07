#include <stdio.h>
#include <string.h>

int main()
{
    char first[2][50],second[2][50],third[2][50];
    printf("First Student Name: ");
    fgets(first[0],sizeof(first[0]),stdin);
    printf("Family Name: ");
    fgets(first[1],sizeof(first[1]),stdin);
    first[0][strlen(first[0])-1] = '\0';
    first[1][strlen(first[1])-1] = '\0';
    
    printf("Second Student Name: ");
    fgets(second[0],sizeof(second[0]),stdin);
    printf("Family Name: ");
    fgets(second[1],sizeof(second[1]),stdin);
    second[0][strlen(second[0])-1] = '\0';
    second[1][strlen(second[1])-1] = '\0';
    
    printf("Third Student Name: ");
    fgets(third[0],sizeof(third[0]),stdin);
    printf("Family Name: ");
    fgets(third[1],sizeof(third[1]),stdin);
    third[0][strlen(third[0])-1] = '\0';
    third[1][strlen(third[1])-1] = '\0';
    
    printf("Our classroom has three students\n1.%s %s\n2.%s %s\n3.%s %s",first[0],first[1],second[0],second[1],third[0],third[1]);
    return 0;
}
