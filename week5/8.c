#include <stdio.h>
#include <string.h>

int main(){

    char line[100];

    printf("Please enter a number: ");
    fgets(line,sizeof(line),stdin);
    line[strlen(line)-1] = '\0';


    switch(line[0]){
        case '-':
            printf("%s is negative number.",line);
            break;
        case '0':
            printf("%s is zero.",line);
            break;
        default:
            printf("%s is positive number.",line);
            break;
    }
    return 0;
}