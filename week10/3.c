#include <stdio.h>
#include <string.h>

int main(){
    struct info
    {
        char code[10];
        char name[100];
        char role[100];
        char part[100];
        char money[100];
        char position[100];
    }a[5] = {
        {"10000","Ohbama","Product Manager","Marketing","70000"},
        {"10001","Tramp","IT Support","IT","30000"},
        {"10002","Bidel","Engineer","Industry","50000"},
        {"10003","Kill Jong","Admin","Industry","30000"}
        };

    strcpy(a[2].name,"Byden");
    strcpy(a[3].name,"Kim");

    strcpy(a[4].code,"10004");
    strcpy(a[4].name,"Soujee");

    strcpy(a[0].position,"US");
    strcpy(a[1].position,"US");
    strcpy(a[2].position,"US");
    strcpy(a[3].position,"Korea");
    strcpy(a[4].position,"SEA");

    printf("Employee Info\n------------------------------------------------------\n");
    printf("%-8s %-10s %-16s \n","ID","Name","Live");
    for(int i=0;i<5;i++){
        printf("%-8s %-10s %-16s \n",a[i].code,a[i].name,a[i].position);
    }


    return 0;
}