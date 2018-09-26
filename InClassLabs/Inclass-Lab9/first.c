#include<stdio.h>

int main(){
  printf("This is C \n");
  printf("Hello \n");

  //for (int count = 0; count <= 10; count++){
    //printf("Hello again!\n");
  //}
    int num1;
    int num2;
    int sum;

    printf("Enter the first number \n");
    scanf("%d", &num1);

    printf("Enter the second number\n");
    scanf("%d", &num2);

    sum = num1+num2;

    printf("The first number is %d and the second number is %d. The sum is %d \n", num1, num2, sum);

  return 0;
}
