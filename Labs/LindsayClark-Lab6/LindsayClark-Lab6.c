#include <stdio.h>
#include <string.h>

int main() {
  int input;

  printf("Enter a path (1, 2, or 3) \n");
  scanf("%d", &input);

  if(input != 1 && input != 2 && input !=3) {
    printf("Error, input exceeded maximum parameters of 1-3! \n");
    return(1);
  }

  if (input == 1) {
    printf("You chose the 'if' branch! \n");
  }
  else if (input == 2) {
    printf("You chose the 'else if' branch! \n");
  }
  else {
    printf("You chose ");
    printf("the 'else' ");
    printf("branch! \n");
  }

  return 0;
}
