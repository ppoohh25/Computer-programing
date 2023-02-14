#include <stdio.h>
#include <math.h>

int main(){
    char line[100];

    printf("Please enter a number: ");
    int a;
    double b = 0;
    fgets(line,sizeof(line),stdin);
    sscanf(line,"%d",&a);

    for(double i =1;i<=a;i++){
        b += pow(i,a);
    }

    printf("%.2lf",b);
    return 0;
}