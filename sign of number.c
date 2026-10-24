/* to check whether a given number is positive,negative or zero.*/
#include<stdio.h>
void main()
{
int a;
printf("\nenter your number:");
scanf("%d",&a);
 if(a>0)
  printf("\nthe number is positive");
 else
 {
 if(a<0)
  printf("\nthe number is negative");
 else
  printf("\nzero is neither positive nor negative"); 
 } 
}  
