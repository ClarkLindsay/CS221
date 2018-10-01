#include <stdio.h>

int power(int a, int b);
int powerR(int *a, int *b);

int main(){
  int num1;
  int num2;

  printf("Enter the first number. \n");
  scanf("%i", &num1);
  printf("Enter the second number. \n");
  scanf("%i", &num2);
  printf("%i raised to %i = %i \n", num1, num2, power(num1, num2));
  int ans = powerR(&num1, &num2);
  printf("%i raised to %i = %i \n", num1, num2, ans);

  return(0);
}

int power(int a, int b){
  int p = 1;
  for(int i = 0; i < b; i++){
    p *= a;
  }
  a = b;
  return p;
}

int powerR(int *a, int *b){
  int p = 1;
  for(int i = 0; i < *b; i++){
    p *= *a;
  }
  *a = *b;
  return p;
}
