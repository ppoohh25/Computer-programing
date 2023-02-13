#include <stdio.h>

int main(){
    char line[100];
    int score[4];

    printf("Please enter Mathematic score: ");
    fgets(line,sizeof(line),stdin);
    sscanf(line,"%d",&score[0]);

    printf("Please enter English score: ");
    fgets(line,sizeof(line),stdin);
    sscanf(line,"%d",&score[1]);

    printf("Please enter Science score: ");
    fgets(line,sizeof(line),stdin);
    sscanf(line,"%d",&score[2]);

    printf("Please enter Art score: ");
    fgets(line,sizeof(line),stdin);
    sscanf(line,"%d",&score[3]);

    float grade[4];

    for(int i =0;i<4;i++){
        if(80 < score[i] && score[i]<= 100){
            grade[i] = 4;
        }
        else if (70 < score[i] && score[i]<= 80)
        {
            grade[i] = 3;
        }
        else if (60 < score[i] && score[i]<=70)
        {
            grade[i] = 2;
        }
        else if (50 < score[i] && score[i]<=60)
        {
            grade[i] = 1;
        }
        else if (0 <= score[i] && score[i]<=50)
        {
            grade[i] = 0;
        }
    }


    float GPA = ((grade[0]*3)+(grade[1]*3)+(grade[2]*3)+(grade[3]*2))/11;

    printf("GPA = %.2f",GPA);

    return 0;
}