#include <stdio.h>

int main()
{
    int live = 20599;
    //September 10, 1964
    int a = 20;
    
    live = live - a;

    int year = live/365;
    live = live%365;
    printf("%d",live);
    
    int com = 31;
    int yon = 30;
    int feb = 28;
    
    
    return 0;
}
