#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    
    char c;
    char str[256];
    char sen[256];
    
    scanf("%c ", &c);
    scanf("%s ", str);
    fgets(sen, 256, stdin);
    
    printf("%c\n", c);
    printf("%s\n", str);
    printf("%s\n", sen);
    
    return 0;
}
