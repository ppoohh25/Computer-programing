#include <stdio.h>
#include <math.h>

int main(){
    char line[100];
    double a,b,c;

    printf("Enter a: ");
    fgets(line,sizeof(line),stdin);
    sscanf(line,"%lf",&a);

    printf("Enter b: ");
    fgets(line,sizeof(line),stdin);
    sscanf(line,"%lf",&b);

    printf("Enter c: ");
    fgets(line,sizeof(line),stdin);
    sscanf(line,"%lf",&c);

    double aa = pow(b,2)-4*a*c;

    switch (aa >= 0)
    {
    case 1:
        switch (aa == 0)
        {
        case 1:
            double x3 = -1*b/(2*a);
            printf("x = %lf",x3);
            break;
        
        default:
            double x1 = (-1*b+sqrt(aa))/(2*a);
            double x2 = (-1*b-sqrt(aa))/(2*a);
            printf("x = %lf , %lf",x1,x2);
            break;
        }
        break;
    
    default:
        printf("Can't slove this");
        break;
    }


    return 0;
}