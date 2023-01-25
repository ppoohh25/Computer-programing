#include <stdio.h>

int main()
{
    /*int live = 20599;
    //September 10, 1964
    int a = 20;
    
    live = live - a;

    int year = live/365;
    live = live%365;
    
    int month = 0;
    
    int m[] = {30,31,30,30,28,30,31,30,31,30,30,31};
    
    int i;
    for(i = 0;i < 12 && live >= 0;i++){
        live = live - m[i];
        month++;
    }
    
    live = live + a;
    
    printf("Jack Ma has been living in this world for %d years, %d month, and %d days",year,month,live);*/
    
    int live = 20599;
    int year = live/365;
    live = live%365;
    
    int month = live/30;
    live = live%30;
    
    printf("Jack Ma has been living in this world for %d years, %d month, and %d days",year,month,live);
    
    
    return 0;

