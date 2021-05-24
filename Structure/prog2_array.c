#include<stdio.h>
#include <stdlib.h>
int main()
{
  struct details{
  char name[100];
  int roll;
  int cls;
  char gender[10];
  };
  struct details s[100];
  int i,n;

  printf("How many records you want to enter:");
  scanf("%d",&n);
  system("cls");


  //INPUT
  for(i=0;i<n;i++)
  {   printf("STUDENT %d:\n",i+1);
      printf("Name Of Student:");
      scanf(" %[^\n]s ",&s[i].name);
      printf("Roll No:");
      scanf("%d",&s[i].roll);
      printf("Semester:");
      scanf("%s",&s[i].cls);
      printf("Gender:");
      scanf("%s",&s[i].gender);
      system("cls");

  }

  //OUTPUT
  printf("\n  \t\t  STUDENT RECORD\n\n");
  printf("Name\t\tRoll No\t\tSemester\tGender\n");
  for(i=0;i<n;i++)
  {
      printf("%-15s\t%d\t\t%d\t\t%s\n",s[i].name,s[i].roll,s[i].cls,s[i].gender);
  }
 return 0;
}
