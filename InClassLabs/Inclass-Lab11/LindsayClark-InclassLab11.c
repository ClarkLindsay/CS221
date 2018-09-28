#include <stdio.h>

int main(){
  int num;
  int rev = 0;

  printf("Enter the number. \n");
  scanf("%d", &num);

  while (num > 0){
    if (num%10 == 0)
      printf("");

    else
      printf("%d", num%10);

    num = num/10;
  }
  printf("\n");

  printf("Enter the number. \n");
  scanf("%d", &num);

  while (num > 0){
    int rem = 0;
    rem = num%10;
    rev = rev*10+rem;
    num = num/10;
  }
  printf("%d \n", rev);

  return(0);
}
