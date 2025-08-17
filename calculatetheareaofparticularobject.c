#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    float R, L, B, side;

    printf("\n**** MENU ****");
    printf("\n1. Area of the Circle");
    printf("\n2. Area of the Rectangle");
    printf("\n3. Area of the Square");
    printf("\n4. Area of the Triangle");
    printf("\n5. Exit");

    printf("\n\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter radius of circle: ");
        scanf("%f", &R);
        printf("Area of Circle = %f",3.14*R*R);
        break;

    case 2:
        printf("Enter length and breadth of rectangle: ");
        scanf("%f %f", &L, &B);
        printf("Area of Rectangle = %f",L*B);
        break;

    case 3:
        printf("Enter side of square: ");
        scanf("%f", &side);
        printf("Area of Square =%f",side*side);
        break;


        case 4:
        printf("\nEnter the  base and height of the Triangle");
        scanf("%f%f", &base, &height);
        printf("Area of Triangle=%f",base*height);
        break;


        case 5:
        printf("\nINvaild Choice!!!!");
        break;

    default :
        printf("Invalid Input");

    }
    return 0;
}



