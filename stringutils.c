// I will Be Updating This Soon So Enjoy !
/*
    Sorry There Is Only 1 For Right Now !
    +-----------------------+
    | STRINGUTILS FUNCTIONS |
    | Functions Included :
        split_string << void | Used To Split A String With char *msg arg and char *delim |
    ---------------------------------
    -Works Fully ! 					-
    -Include It In Your Projects !	-
    - Created By CleverDev#0001     -
    ---------------------------------
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Some Of This Split String Is Not Made Fully By Me I Had To Look At Stack Overflow !
char **split_string(int *spaces_string, char *msg, char *delim)
{
    char **res = malloc(999);
    char str[999];
    strcpy(str, msg);
    char *p = strtok(str, delim);
    while (p)
    {
      res = realloc(res, sizeof (char*) * ++*spaces_string);
      if (res == NULL)
      {
        exit (-1);
      }
      res[*spaces_string-1] = p;
      p = strtok (NULL, delim);
    }
    res = realloc (res, sizeof (char*) * (*spaces_string+1));
    res[*spaces_string] = 0;
    return res;
}
