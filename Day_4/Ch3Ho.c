#include <stdio.h>

int main(){
    int num, dig, rev = 0, i = 0;

    printf("Enter a number: ");
    scanf("%d", &num);
    
    while (num != 0){
        dig = num % 10;
        num = num / 10;
        rev = (rev * 10) + dig;
        i++;
    }
    printf("The Number Reversed: %d", rev);
}