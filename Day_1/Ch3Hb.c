#include <stdio.h>

int main(){
    float km, metre, feet, inch, cm;

    printf("Kilometers: ");
    scanf("%f", &km);
    metre = km * 1000;
    feet = metre * 3.1;
    inch = feet * 12;
    cm = inch * 2.5;
    printf("Meters: %f", &metre);
    printf("feet: %f", &feet);
    printf("Inch: %f", &inch);
    printf("Centimeters: %f", &cm);
}