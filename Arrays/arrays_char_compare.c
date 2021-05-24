#include<stdio.h>
int main()
{
    char str1[30], str2[30];

    printf("Enter two strings:");
    gets(str1);
    gets(str2);
    int i=0, check=0;
    while(str1[i]!='\0'&&str2!='\0')
        {
          if(str1[i]!=str2[i]){
            check = 1;
            break;
          }
        i++;
        }

        if(check==1){
            printf("Strings are not same");
        }
        else{
              printf("Strings are same");
        }



    return 0;
}
