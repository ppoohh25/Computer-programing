#include <stdio.h>
#include <string.h>


int main(){
    char line[100];
    int a[3];
    int *x = a;

    printf("Enter number to compare: ");
    fgets(line,sizeof(line),stdin);
    sscanf(line,"%d",&a[0]);


    printf("Enter number to compare: ");
    fgets(line,sizeof(line),stdin);
    sscanf(line,"%d",&a[1]);


    printf("Enter number to compare: ");
    fgets(line,sizeof(line),stdin);
    sscanf(line,"%d",&a[2]);


    if(*x > *(x+1) && *x > *(x+2)){
        printf("%d is greatest",*(x));
    }
    else if (*(x+1) > *x && *(x+1) > *(x+2))
    {
        printf("%d is greatest",*(x+1));
    }
    else if (*(x+2) > *x && *(x+2) > *(x+1))
    {
        printf("%d is greatest",*(x+2));
    }

    
    
    

    return 0;
}