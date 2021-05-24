#include<stdio.h>
#include<stdlib.h>
struct std{
 char name[25], dept[30], course[25];
 int roll, yoj;
 }s[450];

int main(){

  int n,i,y,r;
  printf("Enter No of Students:");
  scanf("%d",&n);
  system("cls");
   data(n);
   printf("\nEnter Year to Search Record:");
   scanf("%d",&y);
   printf("Search Result:\n");
   search_yoj(n,y);
   printf("\nEnter Roll No to Search Record:");
   scanf("%d",&r);
   printf("Search Result:\n");
   search_roll(n,r);
   return 0;
}
//FUCTION TO ENTER DATA
 void data(int x){
 int limit = x;
     for(int i=0;i<limit;i++)
  {   printf("STUDENT %d:\n",i+1);
      printf("Name Of Student:");
      scanf(" %[^\n]s ",&s[i].name);
      printf("Roll No:");
      scanf("%d",&s[i].roll);
      printf("Department:");
      scanf(" %[^\n]s ",&s[i].dept);
      printf("Course:");
      scanf(" %[^\n]s ",&s[i].course);
      printf("Year Of Joinig:");
      scanf("%d",&s[i].yoj);
      system("cls");

  }
  printf("\t\t\t\tSTUDENT RECORD\n\n");
  printf("Name\t\t\tRoll No\t\tDepartment\t\tCourse\t\tYear Of Joining\n");
  for(int i=0; i<limit; i++){
   printf("%-24s%-16d%-24s%-16s%d\n",s[i].name,s[i].roll,s[i].dept,s[i].course,s[i].yoj);
  }


 }

//FUNCTION TO SEARCH DATA BY YEAR OF JOINING
void search_yoj(int x,int y){
int limit =x;
int year =y;
int count=0;
 for(int i=0; i<limit; i++){
    if(s[i].yoj==year){
         printf("%-24s%-16d%-16s%-16s%d\n",s[i].name,s[i].roll,s[i].dept,s[i].course,s[i].yoj);
         count++;
    }

 }
 if(count==0){
    printf("No Such Records");
 }

}

 //FUNCTION TO SEARCH DATA BY ROLL NO
 void search_roll(int a,int b){
int limit =a;
int roll = b;
int count=0;
 for(int i=0; i<limit; i++){
    if(s[i].roll==b){
         printf("%-24s%-16d%-16s%-16s%d\n",s[i].name,s[i].roll,s[i].dept,s[i].course,s[i].yoj);
         count++;
    }

 }
 if(count==0){
    printf("No Such Records");
 }

}
