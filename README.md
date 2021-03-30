#include "stringutils.h"
#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf("Hello\n");
  int spaces = 0; // To See How Many Spaces Helpful To See How Many Results We Have !
  char *msg = malloc(30);
  msg = "Hello World";
  printf("%s\n", msg);
  char **splitted_msg = malloc(200);
  splitted_msg = split_string(&spaces, msg, " ");// Lets Split It
  printf("Len : %d\n", spaces);
  printf("FIRST ELEM : %s", splitted_msg[0]);
  return 0;
}
