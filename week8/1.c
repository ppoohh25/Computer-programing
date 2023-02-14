#include <stdio.h>

int power(int a,int b){
    int c = 1;
    for(int i =0;i<b;i++){
        c *= a;
    }

    return c;
}

int main(){
    char line[100];
    int num,p;
    printf("Please enter a number: ");
    fgets(line,sizeof(line),stdin);
    sscanf(line,"%d",&num);

    printf("Power by: ");
    fgets(line,sizeof(line),stdin);
    sscanf(line,"%d",&p);

    //int ans = power(num,p);

    printf("%d to the power of %d is %d",num,p,power(num,p));


    return 0;
}
