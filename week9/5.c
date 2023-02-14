#include <stdio.h>
#include <string.h>

int main(){

    char line[100];
    int test[3][3];
    for(int i =0;i<3;i++){
        for(int j = 0;j<3;j++){
            printf("A%d,%d is ",i+1,j+1);
            fgets(line,sizeof(line),stdin);
            sscanf(line,"%d",&test[i][j]);
        }
    }

    /*for(int i =0;i<3;i++){
        for(int j = 0;j<3;j++){
            printf("A%d,%d is %d\n",i+1,j+1,*a[i][j]);
        }
    }*/

    int *result;
    result = &test;
    int sum = 0;

    for(int i =0;i<9;i++){
        sum += *(result+i);
    }

    printf("Sum of Matrix 3*3 is %d",sum);
    return 0;
}