#include <stdio.h>
int main()
{
    int change = 973;
    
    int one_hundred = change/100;
    change = change%100;
    
    int fifty = change/50;
    change = change%50;
    
    int twenty = change/20;
    change = change%20;
    
    int ten = change/10;
    change = change%10;
    
    int five = change/5;
    change = change%5;
    
    int one = change;
    
    printf("%d one hundred Baht banknotes,%d fifty Baht banknotes,%d twenty Baht banknotes,%d ten Baht coins,%d five Baht coins,%d one Baht coins needed to be returned.",one_hundred,fifty,twenty,ten,five,one);
    return 0;
}
