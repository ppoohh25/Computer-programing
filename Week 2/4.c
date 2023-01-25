#include <stdio.h>
#define PI 3.14
int main()
{
    float d = 12742.00;
    float r = d/2;
    float cc = 2*PI*r;
    float ca = PI*r*r;
    float cv = 4/3*PI*r*r*r;
    float cs = 4*PI*r*r;
    printf("The world has %.2f km of diameter, %.2f km of circumference, %.2f km^2 of area, %.2f km^3 of volume, and %.2f km^2 of surface area.",d,cc,ca,cv,cs);
    return 0;
}
