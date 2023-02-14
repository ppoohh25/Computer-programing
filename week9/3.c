#include <stdio.h>
#include <string.h>

int main(){
    char line[100];
    char *x = line;
    int count = 0;

    printf("Enter sentence: ");
    fgets(line,sizeof(line),stdin);
    line[strlen(line)-1] = '\0';

    while (*x != NULL)
    {
        count++;
        *(x++);
    }
    
    printf("%d",count);

    return 0;
}