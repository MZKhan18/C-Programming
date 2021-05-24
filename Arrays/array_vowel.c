#include<stdio.h>
int main()
{

    char d[10];
    int count=0;
    int i= 0;
    printf("Enter any text:");
    scanf("%[^\n]s",d);
    while(d[i]!=NULL){
        if(d[i]=='a'||d[i]=='e'||d[i]=='i'||d[i]=='o'||d[i]=='u'){
            count++;
        }
        i++;
    }
    printf("Count = %d",count);
    return 0;
}
