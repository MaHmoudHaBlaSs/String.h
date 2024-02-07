#include <stdio.h>
#include <stdlib.h>

#include "File.h"

char Str1[40] = "Mahmoud Gamal Hablass";
char D[2] = " ";

int main()
{
   char *token = NULL; 
   /* get the first token */
   token = my_strtok(Str1, D);
   

    printf( " %s\n", token );
    printf(" %s\n", my_strtok(NULL , D));
    printf(" %s\n", my_strtok(NULL , D));

    return 0;
}

