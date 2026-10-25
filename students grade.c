/*To calculate a student's grade based on marks out of 100.
Conditions:
90–100: Grade O
80–89: Grade A+
70–79: Grade A
60–69: Grade B
50–59: Grade C
Below 50: Fail
Below 0 or above 100: Invalid mark*/
#include<stdio.h>
void main()
{
    int mark;
    printf("Enter marks out of 100:");
    scanf("%d",&mark);
    if (mark<0||mark>100)
        printf("Invalid mark");
    else if (mark>=90)
        printf("Grade O");
    else if (mark>=80)
        printf("Grade A+");
    else if (mark>=70)
        printf("Grade A");
    else if (mark>=60)
        printf("Grade B");
    else if (mark>=50)
        printf("Grade C");
    else
        printf("Fail");
}
