#include <stdio.h>

void isprime(int a){
    int result = 1;
    for(int i =2;i<=a/2;i++){
        if(a%i == 0){
            result = 0;
            break;
        }
    }

    if(result == 1){
        printf("%d is a prime number.",a);
    }
    else{
        printf("%d is not a prime number.",a);
    }
}

int main(){
    char line[100];
    int num;
    printf("Please enter a number: ");
    fgets(line,sizeof(line),stdin);
    sscanf(line,"%d",&num);

    isprime(num);

    return 0;
}