# include <stdio.h>

int main(){
    int days;

    printf("Enter no. of days late: \n");
    scanf("%d", &days);

    if(days <= 5){
        printf("The fine is 50p");
    }
    else if(days <= 10){
        printf("The fine is 1Rs");
    }
    else if (days >= 10 && days < 30){
        printf("The fine is 5Rs");
    }
    else{
        printf("Membership is cancelled");
    }
}
