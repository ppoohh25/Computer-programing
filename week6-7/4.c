#include <stdio.h>
#include <string.h>

int main(){

    char string[] = "The quick brown fox jumps over the lazy dog";
    int a = 0;

    for(int i =0;i<strlen(string);i++){
        if(string[i]=='o' || string[i] == 'O'){
            a += 1;
        }
    }

    printf("There are %d o in sentence.",a);
    return 0;
}