#include <stdio.h>

int main(){
    char line[100];
    int a;
    printf("Please enter a number: ");
    fgets(line,sizeof(line),stdin);
    sscanf(line,"%d",&a);

    if(a > 0){
        if (a % 2 == 0)
        {
            printf("%d is positive even number.",a);
        }
        else
        {
            printf("%d is positive odd number.",a);
        }
        
        
    }
    else if (a < 0)
    {
        if (a % 2 == 0)
        {
            printf("%d is negative even number.",a);
        }
        else
        {
            printf("%d is negative odd number.",a);
        }
    }
    else{
        printf("%d is zero.",a);
    }
    
    return 0;
}