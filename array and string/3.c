int main()
{
    char line[100];
    int num[10];
    for(int i =0;i<10;i++){
        printf("Please enter number %d: ",i+1);
        fgets(line,sizeof(line),stdin);
        sscanf(line,"%d",&num[i]);
    }
    printf("The number are %d, %d, %d, %d, %d, %d, %d, %d, %d, %d",num[0],num[1],num[2],num[3],num[4],num[5],num[6],num[7],num[8],num[9]);
    return 0;
}
