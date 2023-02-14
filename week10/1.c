#include <stdio.h>

int main(){

    struct info
    {
        char code[10];
        char name[100];
        char role[100];
        char part[100];
        char money[100];
    }a[5] = {
        {"10000","Ohbama","Product Manager","Marketing","70000"},
        {"10001","Tramp","IT Support","IT","30000"},
        {"10002","Bidel","Engineer","Industry","50000"},
        {"10003","Kill Jong","Admin","Industry","30000"}
        };
    

    return 0;
}
