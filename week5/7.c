#include <stdio.h>
#include <string.h>

int main(){

    char a[2];
    int check = 1;
    printf("Get 1 character: ");
    fgets(a,sizeof(a),stdin);


    char v[] = {'a','e','i','o','u','A','E','I','O','U'};
    for(int i =0;i<strlen(v)-2;i++){
        if(v[i] == a[0]){
            printf("%c",v[i]);
            check = -1;
            break;
        }
    }
    
    switch (check)
    {
    case 1:
        printf("This character is consonant");
        break;
    case -1:
        printf("This character is vovel");
        break;
    default:
        break;
    }
    return 0;
}