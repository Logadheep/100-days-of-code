#include <stdio.h>

int main(){
    int raj, shyam, ajay;

    scanf("%d", &raj);
    scanf("%d", &shyam);
    scanf("%d", &ajay);

    if(raj > shyam && ajay > shyam){
        printf("Shyam is the youngest.");
    }
    else if (shyam > raj && ajay > raj){
        printf("Raj is the youngest.");
    }
    else if(shyam > ajay && raj > ajay){
        printf("Ajay is the youngest.");
    }
}