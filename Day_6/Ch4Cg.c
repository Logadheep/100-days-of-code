# include <stdio.h>

int main(){
    float a1, a2, a3, sum;

    scanf("%f", &a1);
    scanf("%f", &a2);
    scanf("%f", &a3);

    sum = a1 + a2 + a3;
    if(sum == 180.0){
        printf("It is a triangle.");
    }
}