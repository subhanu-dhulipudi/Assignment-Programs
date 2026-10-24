/*to find th final amount a costumer has to pay*/
#include<stdio.h>
void main()
{
    float amount,discount,delivery,total;
    int member;

    printf("Enter order amount:");
    scanf("%f",&amount);

    printf("Enter membership (1-Premium,0-Regular):");
    scanf("%d",&member);

    switch (member)
    {
       case 1:
            discount=amount*0.10;
            break;

       case 0:
            discount=0;
            break;

       default:
            printf("Invalid membership type");
    }

    if (amount>=500)
        delivery=0;
    else
        delivery=50;

    total=amount-discount+delivery;
    printf("Discount = Rs.%f\n",discount);
    printf("Delivery charge = Rs.%f\n",delivery);
    printf("Final amount = Rs.%f",total);
}
