#include<stdio.h>
int main(){
    int a,b,c,x;
    printf("Enter three numbers:");
    x =scanf("%d%d%d",&a,&b,&c);
       if(x==3){
        int add = a+ b+ c;
        int multi = a*b*c;
        printf("%d\t%d",add,multi);
}return 0;


}
