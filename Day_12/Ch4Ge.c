# include <stdio.h>

int main(){
    int a, b, c;

    scanf("%d,%d,%d", &a, &b, &c);

    if (a + b > c){
        printf("It is a triangle.");
    }
    else{
        printf("It is not a triangle.");
    }
}