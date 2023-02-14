#include <stdio.h>
#include <string.h>

//not perfect if there have length the same it will show the first one it see

int main(){
    char str[100];
    int a =0,n = 0,v[100];

    printf("Please enter a sentence: ");
    fgets(str,sizeof(str),stdin);
    
    //printf("strlen = %d\n",strlen(str));

    str[strlen(str)-1] = '\0';
    for(int i =0;i<=strlen(str);i++){
        if(str[i]==' ' || str[i]=='\0'){
            n++;
            v[n] = a;
            a = 0;
        }
        else{
            a++;
        }
    }

    int save = 0;
    int d = 0;
    for(int i = 1;i<=n;i++){
        if(v[i]>d){
            d = v[i];
            //printf("this word is in %d in v[]\n",i);
            save = i;
        }
        //printf("It has %d words\n",v[i]);
    }

    int start;
    for(int i = 1;i<save;i++){
        start += v[i]+1;
    }
    printf("The longest word is ");
    for(int i = start;i<start+d;i++){
        printf("%c",str[i]);
    }
    //printf("Start at %d",start);





    //printf("there are %d words",n);
    return 0;
}