#include<stdio.h>
int main()
{
    char a[10]= {'a','b','c','\0'};
    char b[]="ABCDE";
    printf("%s",a);
    printf("\n%s",b);

    /*char c[10];
    printf("\nEnter any text:");
    scanf("%s",c);
    printf("\n%s",c);*/ //dosent prints after space, considers space as null

    char d[10];
    printf("\nEnter any text:");
    scanf("%[^\n]s",d);      //[^\n] prints the whole line until we press enter
    printf("\n%s",d);

    return 0;

}
