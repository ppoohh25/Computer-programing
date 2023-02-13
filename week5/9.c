#include <stdio.h>

int main(){
    char line[100];
    int a,b;

    printf("Get num 1: ");
    fgets(line,sizeof(line),stdin);
    sscanf(line,"%d",&a);

    printf("Get num 2: ");
    fgets(line,sizeof(line),stdin);
    sscanf(line,"%d",&b);

    switch(a>b){
        case 1:
            printf("%d is greater than %d",a,b);
            break;
        case 0:
            printf("%d is greater than %d",b,a);
            break;
        default:
            break;
    }

    return 0;
}