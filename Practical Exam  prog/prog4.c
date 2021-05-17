#include<stdio.h>
#include<math.h>
int main()
{
    int n1,n2,n3;
    printf("Enter three numbers:");
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1*n1 == n2*n2 + n3*n3 || n2*n2 == n1*n1 + n3*n3 || n3*n3 == n2*n2 + n1*n1){
        printf("The numbers form a pythagorean  triplet");
    }
    else{
        printf("The numbers do not form a pythagorean  triplet");
    }
    return 0;
}
