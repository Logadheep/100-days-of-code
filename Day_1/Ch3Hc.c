#include <stdio.h>

int main(){
    float percent, marks[5], total = 0;
    int aggr;

    for(int i = 0; i < 5; i++){
        printf("Enter mark for subject %d: ", (i+1));
        scanf("%f", &marks[i]);
    }
    for(int i = 0; i < 5; i++){
        total += marks[i];
    }
    aggr = total / 5;
    percent = total / 5;
    printf("\nAggregate Marks: %d", aggr);
    printf("\nPercentage(%): %f", percent);
    return 0;
}