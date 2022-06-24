//Infix to Postfix program in c
#include <stdio.h>

int precedence(char ch){
    switch(ch){
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
        default:
            return -1;
    }
}
int main(){
    char infix[100];
    char postfix[100];
    printf("Enter the infix expression: ");
    scanf("%s", infix);
    int i = 0, j=0;
    //Convert infix to postfix
    while(infix[i] != '\0'){
        if(isalnum(infix[i])){
            printf("%c", infix[i]);
        }
        else if(infix[i] == '('){
            postfix[j] = infix[i];
            j++;
        }
        else if(infix[i] == ')'){
            for(int j = i; j >= 0; j--){
                if(postfix[j] == '('){
                    break;
                }
                else{
                    printf("%c", postfix[j]);
                }
            }
        }
        else{
            while(j > 0 && precedence(infix[i]) <= precedence(postfix[j-1])){
                printf("%c", postfix[j-1]);
                j--;
            }
            postfix[j] = infix[i];
            j++;
        }
        i++;
    }
    printf("%s", postfix);
}