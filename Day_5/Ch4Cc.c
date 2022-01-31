# include <stdio.h>

int main(){
    int yr;

    printf("Enter a valid year: ");
    scanf("%d", &yr);

    if(yr % 100 == 0){
        if(yr % 400 == 0){
            printf("\nIt is a leap year");
        }
        else{printf("\n It is not a leap year");}
    }
    else if(yr % 4 == 0){
        printf("\n It is a leap year");
    }
    else{
        printf("\n It is not a leap year");
    }
}