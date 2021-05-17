#include<stdio.h>
int main(){
int a,b;
printf("Enter starting and ending range:");
scanf("%d%d",&a,&b);
int count =0;
printf("List of prime numbers is:");

for(int i =a; i<=b; i++){
    for(int j=2; j<i; j++){
        if(i%j==0){
            break;
        }
        else{
            count+=1;
        }
    }
    if(i==count+2){
        printf("\n%d",i);
    }
    count=0;
}
return 0;
}
