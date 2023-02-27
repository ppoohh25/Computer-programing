#include <stdio.h>

int main(){
    char line[100];
    int aa,bb;
    int *a = &aa,*b = &bb;
    printf("input first number:");
    fgets(line,sizeof(line),stdin);
    sscanf(line,"%d",a);

    printf("input second number:");
    fgets(line,sizeof(line),stdin);
    sscanf(line,"%d",b);

    //printf("%d",*a);

    printf("%d + %d is %d",*a,*b,*a+*b);


    return 0;

}
