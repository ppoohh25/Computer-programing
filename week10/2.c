#include <stdio.h>
#include <string.h>

int main(){
    char line[100];
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


        printf("Enter ID of Employee : ");
        fgets(a[4].code,sizeof(a[4].code),stdin);
        a[4].code[strlen(a[4].code)-1] = '\0';

        printf("Enter name of Employee : ");
        fgets(a[4].name,sizeof(a[4].name),stdin);
        a[4].name[strlen(a[4].name)-1] = '\0';

        printf("Enter role of Employee : ");
        fgets(a[4].role,sizeof(a[4].role),stdin);
        a[4].role[strlen(a[4].role)-1] = '\0';

        printf("Enter part of Employee : ");
        fgets(a[4].part,sizeof(a[4].part),stdin);
        a[4].part[strlen(a[4].part)-1] = '\0';

        printf("Enter sarlary of Employee : ");
        fgets(a[4].money,sizeof(a[4].money),stdin);
        a[4].money[strlen(a[4].money)-1] = '\0';


        printf("**************************************************************\n");
        printf("Employee Info\n------------------------------------------------------\n");
    printf("%-8s %-10s %-16s %-12s %-10s\n","ID","Name","Position","Department","Salary");
    for(int i=0;i<5;i++){
        printf("%-8s %-10s %-16s %-12s %-10s\n",a[i].code,a[i].name,a[i].role,a[i].part,a[i].money);
    }
    

    return 0;
    }