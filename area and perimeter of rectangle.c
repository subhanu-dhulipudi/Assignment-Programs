/*to calculate area and perimeter of a ractangle*/
#include<stdio.h>
void main()
{
    float length,breadth,area,perimeter;
    printf("Enter length and breadth: ");
    scanf("%f %f",&length,&breadth);
    area=length*breadth;
    perimeter=2*(length+breadth);
    printf("\nArea of the rectangle is = %f",area);
    printf("\nPerimeter of the reactangle is = %f",perimeter);
}
