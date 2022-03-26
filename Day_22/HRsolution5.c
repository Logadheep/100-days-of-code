#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function 
    a = (*a) + (*b); 
    b = (*a) - (*b);         
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d", &a);
    scanf("%d", &b);    
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
