/*To approve a loan based on age, monthly income, and credit score.
Conditions:
Age must be between 21 and 60.
Monthly income must be at least ₹25,000.
Credit score must be at least 700.*/
#include<stdio.h>
void main()
{
    int age, credit;
    float income;
    printf("Enter age:");
    scanf("%d",&age);
    printf("Enter monthly income:");
    scanf("%f",&income);
    printf("Enter credit score:");
    scanf("%d",&credit);
    if (age<21||age>60)
        printf("Loan rejected because age is not in between 21 and 60");
    else if (income<25000)
        printf("Loan rejected because income is below Rs.25000");
    else if (credit<700)
        printf("Loan rejected because credit score is below 700");
    else
        printf("Loan approved");
}
