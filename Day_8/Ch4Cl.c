# include <stdio.h>

int main(){
    float x, y;

    printf("X,Y(Put it together-comma separated): ");
    scanf("%f,%f", &x, &y);

    if(x == 0){
        printf("The point is on y-axis");
    }
    else if(y == 0){
        printf("The point is on x-axis");
    }
    else if(x == 0 && y == 0){
        printf("The point is on the origin");
    }
    else {
        printf("The point is on the quadrant");
    }
}