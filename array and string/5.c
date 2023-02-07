#include <stdio.h>
#include <string.h>

int main()
{
    char line[100];
    int A[3][3];
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
                printf("input A[%d][%d]: ",i,j);
                fgets(line,sizeof(line),stdin);
                sscanf(line,"%d",&A[i][j]);
        }
    }
    printf("The matrix A is\n");
    for(int k = 0;k<3;k++){
        for(int l =0;l<4;l++){
            if(l == 3){
                printf("\n");
            }
            else if(l == 2){
                printf("%d",A[k][l]);
            }
            else{
                printf("%d ",A[k][l]);
            }
        }
    }
    int det = (A[0][0]*A[1][1]*A[2][2])+(A[0][1]*A[1][2]*A[2][0])+(A[0][2]*A[1][0]*A[2][1])-(A[2][0]*A[1][1]*A[0][2])-(A[2][1]*A[1][2]*A[0][0])-(A[2][2]*A[1][0]*A[0][1]);
    printf("The determinant of matrix is %d",det);
    return 0;
}
