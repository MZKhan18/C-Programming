/* find the given character is a vowel or not by using switch case */
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any alphabet: ");
    scanf("%c",&ch);
    switch(ch){
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':printf("VOWEL");
    break;
    default:printf("Not vowel");
    break;

        }
    return 0;

}
