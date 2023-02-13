#include <stdio.h>
#include <string.h>

int main(){
    char line[100],opp;
    int a,b;

    printf("Please enter a number: ");
    fgets(line,sizeof(line),stdin);
    sscanf(line,"%d",&a);

    printf("Operation: ");
    fgets(line,sizeof(line),stdin);
    sscanf(line,"%c",&opp);

    printf("Please enter another number: ");
    fgets(line,sizeof(line),stdin);
    sscanf(line,"%d",&b);

    if(opp == '+'){
        printf("%d + %d = %d",a,b,a+b);
    }
    else if (opp == '-')
    {
        printf("%d - %d = %d",a,b,a-b);
    }
    else if (opp == 'x' || opp == 'X')
    {
        printf("%d x %d = %d",a,b,a*b);
    }
    else if (opp == '/')
    {
        printf("%d / %d = %d",a,b,a/b);
    }
    return 0;
}