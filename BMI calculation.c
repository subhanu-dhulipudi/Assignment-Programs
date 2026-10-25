/*To calculate BMI and display the corresponding category*/
#include<stdio.h>
void main()
{
    float weight,height,bmi;

    printf("Enter weight in kg:");
    scanf("%f",&weight);

    printf("Enter height in meters:");
    scanf("%f",&height);

    if (weight<=0||height<=0)
    {
        printf("Invalid input");
        return 0;
    }
 bmi = weight/(height * height);
    printf("BMI = %f\n",bmi);
    if (bmi<18.5)
        printf("Underweight");
    else if (bmi<25)
        printf("Normal");
    else if (bmi<30)
        printf("Overweight");
    else
        printf("Obese");
}
