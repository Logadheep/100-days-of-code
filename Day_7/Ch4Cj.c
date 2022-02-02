#include <stdio.h>
#include <math.h>

int main(){
  int x[3], y[3], i = 1;
  int m1, m2;
  
  while(i <= 3){
    printf("Enter x%d value: ", i);
    scanf("%d", &x[i]);
    printf("Enter y%d value: ", i);
    scanf("%d", &y[i]);
    i++;
  }
  m1 = (x[1]-x[0])/(y[1]-y[0]);
  m2 = (x[2]-x[1])/(y[2]-y[1]);
  
  if(m1==m2){
    printf("\nThey are in a straight line.");
  }
  else{
    printf("They are not in a straight line");
  }
}
