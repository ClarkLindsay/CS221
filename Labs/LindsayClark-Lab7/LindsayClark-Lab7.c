#include <stdio.h>
#include <string.h>

void swap(int *a, int *b);

int num2 = 2;

int main(int argc, char **argv){

  char ch[strlen(argv[1])];

  for (int i = 1; i < argc; i++){
    fprintf(stdout,"%s \n", argv[i]);
  }

  if (argc < 3){
    char *label;
    label = &argv[1][strlen(argv[1])];
    int j = 0;
    for (int i = strlen(argv[1]); i >= 0; i--){
      ch[strlen(argv[1])-i] = *label;
      label--;

    }
    printf("\n");
  }

  for (int i = 0; i <= strlen(argv[1]); i++)
    fprintf(stderr, "%c", ch[i]);

  printf("\n");

  int num1 = 1;
  int *point = &num1;

  printf("%p, %i \n", point, *point);
  point = &num2;
  swap(&num1, &num2);
  printf("%i, %i \n", num1, *point);

  return(0);
}

void swap(int *a, int *b){
  int temp = 0;
  temp = *a;
  *a = *b;
  *b = temp;
}
