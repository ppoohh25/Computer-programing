#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    
    char line[100];
    int a[5];
    int i = 0;

    printf("Please enter five numbers: ");
    fgets(line,sizeof(line),stdin);

    char* token = strtok(line," ");

    while(token != NULL){
        //printf("%s\n",token);
        sscanf(token,"%d",&a[i]);
        token = strtok(NULL," ");
        i++;
    }

    int max = 0,step =1;
    for(int i = 0;i<5;i++){
        if(a[i]> max){
            max = a[i];
        }
    }

    int lcm;
    while (1)
    {
        if(max%a[0] == 0 && max%a[1] == 0 && max%a[2] == 0 && max%a[3] == 0 && max%a[4] == 0){
            lcm = max;
            break;
        }
        max += step;
    }
    
    int gdc;
    for(int i = 1;i<=a[0] && i<=a[1] && i<=a[2] && i<=a[3] && i<=a[4];i++){
        if(a[0]%i == 0 && a[1]%i == 0 && a[2]%i == 0 && a[3]%i == 0 && a[4]%i == 0){
            gdc = i;
        }
    }

    printf("L.C.M. is %d\n",lcm);
    printf("G.C.D. is %d",gdc);
    /*for(int i = 0;i<5;i++){
        printf(" num is %d",a[i]);
    }*/
    return 0;
}