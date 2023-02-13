#include <stdio.h>

int main(){
    char line[100];
    float a;
    printf("Please enter a number: ");
    fgets(line,sizeof(line),stdin);
    sscanf(line,"%f",&a);

    if(a > 0){
        printf("%.1f is positive number.",a);
    }
    else if (a < 0)
    {
        printf("%.1f is negative number.",a);
    }
    else{
        printf("%.1f is zero.",a);
    }
    
    return 0;
}
