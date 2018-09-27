#include <stdio.h>
#include <limits.h>

int main(){
  int num;
  float flo;

  printf("Enter the int. \n");
  scanf("%d", &num);

  printf("Enter the float. \n");
  scanf("%f", &flo);

  float division = num/flo;
  float remaind = num%(int)flo;

  printf("Division: %f \n", division);
  printf("Remainder: %f \n", remaind);

  return(0);
}
