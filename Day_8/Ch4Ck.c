# include <stdio.h>

int main(){
    float r, x, y;

    printf("Radius,X,Y(Put it together-comma separated): ");
    scanf("%f,%f,%f", &r, &x, &y);

    if(r*r == (x*x) + (y*y)){
        printf("The point is on the circle");
    }
    else if(r*r < (x*x) + (y*y)){
        printf("The point is outside the circle");
    }
    else if(r*r > (x*x) + (y*y)){
        printf("The point is inside the circle");
    }
}