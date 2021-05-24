#include<stdio.h>
main()
{
    struct book{
    char name;
    int price;
    int pages;
    };
    struct book b1,b2,b3;
    //TAKING INPUT OF STRUCT
    printf("Enter name, price and No. of pages of first book\n");
    scanf(" %c %d%d",&b1.name,&b1.price,&b1.pages);
    printf("Enter name, price and No. of pages of second book\n");
    scanf(" %c %d%d",&b2.name,&b2.price,&b2.pages);
    printf("Enter name, price and No. of pages of third book\n");
    scanf(" %c %d%d",&b3.name,&b3.price,&b3.pages);

    //PRINTING OUTPUT
    printf("Details of books you entered\n");
    printf("\n%c\t%d\t%d",b1.name,b1.price,b1.pages);
    printf("\n%c\t%d\t%d",b2.name,b2.price,b2.pages);
    printf("\n%c\t%d\t%d",b3.name,b3.price,b3.pages);
    return 0;
}
