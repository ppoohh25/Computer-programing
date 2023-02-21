#include <stdio.h>

int p(int a,int b){
    int answer =1;
    for(int i = 1;i<=b;i++){
        answer *=a;
    }

    return answer;
}

int main(){
    char line[100];

    printf("Please enter a number: ");
    int a;
    double b = 0;
    fgets(line,sizeof(line),stdin);
    sscanf(line,"%d",&a);

    for(double i =1;i<=a;i++){
        b += p(i,a);
    }

    printf("%.2lf",b);
    return 0;
}