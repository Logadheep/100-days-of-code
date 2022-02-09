# include <stdio.h>

int main(){
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if(a == b && b == c){
        printf("It is a equilateral triangle.");
    }
    else if(a == b || b == c || c==a){
        printf("It is an isoceles Triangle.");
    }
    else{
        printf("It is a scalene triangle.");
    }
}
