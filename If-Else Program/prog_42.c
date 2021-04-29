/* . A university has the following rules for a student to qualify for a degree with A as the main
subject and B as the subsidiary subject:
 (a) He should get 55 percent or more in A and 45 percent or more in B.
 (b) If he gets than 55 percent in A he should get 55 percent or more in B. However, he
 should get at least 45 percent in A.
 (c) If he gets less than 45 percent in B and 65 percent or more in A he is allowed to
 reappear in an examination in B to qualify.
 (d) In all other cases he is declared to have failed.
 Write a program to receive marks in A and B and Output whether the student has passed, failed
or is allowed to reappear in B. */
#include<stdio.h>
int main()
{ int a, b;
    printf("Enter marks in A and B :");
    scanf("%d%d",&a,&b);

    if(a>=55     && b>=45)
    {
        printf("Student is passed.");
    }
    else if(a<55 && a>=45 && b>=55)
    {
        printf("Student is passed.");
    }
    else if(a>=65 && b<45)
    {
        printf("Student is allowed to reappear in exams.");

    }
    else
    {
        printf("Student is failed.");
    }
    return 0;


}
