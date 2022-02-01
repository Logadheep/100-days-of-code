#include <stdio.h>

int main(){
    int num, temp, dig, rev = 0, i = 0;

    temp = num;
    printf("\nEnter a number: ");
    scanf("%d", &num);
    
    while (num != 0){
        dig = num % 10;
        num = num / 10;
        rev = (rev * 10) + dig;
        i++;
    }
    printf("\nThe Number Reversed: %d", rev);

    if (num == rev){
        printf("\nIt is a Palindrome.");
    }
    else{
        printf("\nIt is not a palindrome.");
    }
}