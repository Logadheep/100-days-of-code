#include <stdio.h>

int main(){
    int n, p, res = 1;

    scanf("%d %d", &n, &p);

    for(int i = 0; i < p; i ++){
        res *= n;
    }
    printf("%d", res);
}