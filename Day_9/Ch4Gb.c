#include <stdio.h>

int main(){
    char c;
    scanf("%c", &c);
    if((0 + c) <= 90 && (0 + c) >= 65){
        printf("It is an upper case letter");
    }
    else if ((0 + c) >= 97 && (0 + c) <= 122){
        printf("It is lower case letter");
    }
    else if((0 + c) <= 57 && (0 + c) >= 48){
        printf("It is a number");
    }
    else{
        printf("It is a special character.");
    }
}