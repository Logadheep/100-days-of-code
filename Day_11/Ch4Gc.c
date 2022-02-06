# include <stdio.h>

int main(){
    float hard, carbon, tensile;

    printf("Enter hardness, carbon content, tensile strength comma separated(no spaces in between)\n");
    scanf("%f,%f,%f", &hard, &carbon, &tensile);

    if(hard >= 50 && carbon >= 0.7 && tensile >= 5600){
        printf("Grade is 10.");
    }
    else if (hard >= 50 && carbon >= 0.7){
        printf("Grade is 9.");
    }
    else if (tensile >= 5600 && carbon >= 0.7){
        printf("Grade is 8.");
    }
    else if (hard >= 50 && tensile >= 0.7){
        printf("Grade is 7.");
    }
    else if (hard >= 50 || carbon >= 0.7 || tensile >= 5600){
        printf("Grade is 6.");
    }
    else{
        printf("Grade is 5.");
    }
}
