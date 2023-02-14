#include <stdio.h>
#include <string.h>

int main(){
    printf("Please enter a sentence: ");
    char string[100];
    fgets(string,sizeof(string),stdin);

    string[strlen(string)-1] = '\0';

    int a = 0;

    for(int i =0;i<strlen(string);i++){
        if((string[i] == 'T' || string[i] == 't') && string[i+1] == 'h' && string[i+2] == 'e' && (string[i+3]==' '|| string[i+3]=='\0')){
            a+=1;
        }
    }
    
    printf("%d",a);
    return 0;
}