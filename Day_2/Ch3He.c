#include <stdio.h>

int main(){
    //Declaring Variables
    float r, area_cir, l, b, area_sqr;
    
    //Computation for Area of Circle
    printf("Enter Radius: ");
    scanf("%f", &r);

    area_cir = 3.14 * r * r;
    printf("\nArea of Circle: %f", area_cir);

    //computation for Area of rectangle
    printf("\nEnter Length: ");
    scanf("%f", &l);
    printf("\nEnter Breadth: ");
    scanf("%f", &b);

    area_sqr = l * b;
    printf("\nArea of Square: %f", area_sqr);
}