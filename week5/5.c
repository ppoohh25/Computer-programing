#include <stdio.h>

int main(){
    char line[100];
    int a[3][3],check=1;

    for(int i =0;i<3;i++){
        for (int j = 0; j < 3; j++)
        {
            printf("Please input A%d,%d: ",i,j);
            fgets(line,sizeof(line),stdin);
            sscanf(line,"%d",&a[i][j]);
        }
        
    }

    for(int i=0;i<3;i++){
        for(int j = 0;j<3;j++){
            if(i == j && a[i][j] != 1){
                check = -1;
                break;
            }
            else if (i !=j && a[i][j] !=0)
            {
                check = -1;
                break;
            }
            
        }
    }

    if(check == 1){
        printf("Matrix A is identity matrix.");
    }else
    {
        printf("Matrix A is not identity matrix.");
    }
    
    return 0;
}