#include <stdio.h>

int main(){
    int n = 2, i, m = 0, flag = 0;
    while(n <= 300){
        m = n / 2;
        for (i = 2; i <= m; i++){
            if (n % i == 0){
                flag = 1;
            }
        }
        if (flag == 0){printf("\t %d", n);}
        flag = 0;
        n++;
    }
}