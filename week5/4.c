#include <stdio.h>

int main(){
    char line[100];
    int a[3][3];

    for(int i =0;i<3;i++){
        for (int j = 0; j < 3; j++)
        {
            printf("Please input A%d,%d: ",i,j);
            fgets(line,sizeof(line),stdin);
            sscanf(line,"%d",&a[i][j]);
        }
        
    }

    int max = a[0][0];
    int min = a[0][0];

    for (int i = 0; i < 3; i++)
    {
        for(int j = 0;j<3;j++){
            if(a[i][j] > max){
                max = a[i][j];
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for(int j = 0;j<3;j++){
            if(a[i][j] < min){
                min = a[i][j];
            }
        }
    }

    printf("Maximum number in A is %d\n",max);
    printf("Minimum number in A is %d",min);

    return 0;
}