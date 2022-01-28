#include <stdio.h>

int main(){
    //Declaring Variables
    int c, d, temp;
    printf("Enter two numbers space separated: ");
    scanf("%d %d", &c, &d);

    temp = c;
    c = d;
    d = temp;
    printf("Two numbers interchanged: %d %d", c, d);
    return 0;
}