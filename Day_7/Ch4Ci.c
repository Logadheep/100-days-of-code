#include <stdio.h>

int main(){
  int l, b, p, a;
  printf("Enter the length of the rectangle: ");
  scanf("%d", &l);
  printf("Enter the breadth of the rectangle: ");
  scanf("%d", &b);
  p = 2*(l+b);
  a = l*b;
  if(a>p){
    printf("\nThe statement is true");
  }
}
