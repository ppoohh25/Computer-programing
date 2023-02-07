#include <stdio.h>

int main()
{
    char line[100];
    int a,b,c,d,e,f,g,h,i,j;
    printf("Please enter number 1: ");
    fgets(line, sizeof(line),stdin);
    sscanf(line,"%d",&a);
    
    printf("Please enter number 2: ");
    fgets(line, sizeof(line),stdin);
    sscanf(line,"%d",&b);
    
    printf("Please enter number 3: ");
    fgets(line, sizeof(line),stdin);
    sscanf(line,"%d",&c);
    
    printf("Please enter number 4: ");
    fgets(line, sizeof(line),stdin);
    sscanf(line,"%d",&d);
    
    printf("Please enter number 5: ");
    fgets(line, sizeof(line),stdin);
    sscanf(line,"%d",&e);
    
    printf("Please enter number 6: ");
    fgets(line, sizeof(line),stdin);
    sscanf(line,"%d",&f);
    
    printf("Please enter number 7: ");
    fgets(line, sizeof(line),stdin);
    sscanf(line,"%d",&g);
    
    printf("Please enter number 8: ");
    fgets(line, sizeof(line),stdin);
    sscanf(line,"%d",&h);
    
    printf("Please enter number 9: ");
    fgets(line, sizeof(line),stdin);
    sscanf(line,"%d",&i);
    
    printf("Please enter number 10: ");
    fgets(line, sizeof(line),stdin);
    sscanf(line,"%d",&j);
    
    printf("The number are %d, %d, %d, %d, %d, %d, %d, %d, %d, %d",a,b,c,d,e,f,g,h,i,j);
    return 0;
}
