#include <stdio.h>
#include <string.h>

int main(){
    char line[100];
    int *result ;*result = 1;
    int test;
    int *a;
    a = &test;
    printf("Enter number: ");
    fgets(line,sizeof(line),stdin);
    sscanf(line,"%d",a);
    
    
    //printf("hi%d",*a);
    for(int i = *a;i>=1;i--){
        *result *= i;
    }
    
    printf("factorial of %d is %d",*a,*result);

    return 0;
}