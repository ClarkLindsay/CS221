#include <stdio.h>
#include <string.h>

int main(int argc, char **argv){

  int count = 0;

  for (int i = 0; i < strlen(argv[1]); i++)
    count++;

  printf("Number of characters in string: %i \n", count);

  struct Books{
    char title[10];
    int id;
  } book;

  struct Books *p1 = &book;

  strcpy(book.title, "Ham");

  printf("%d \n", p1 -> title);

  int num[] = {1, 2, 3, 4};

  printf("%i \n", *num);
  printf("%i \n", num);
  printf("%i \n", &num);
  printf("%i \n", *(num + 2));

  return(0);
}
