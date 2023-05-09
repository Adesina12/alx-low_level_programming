#include <stdio.h>
#include <stdlib.h>
/**
main - argument
@argc : Argument count
@argv : Argument vector
**/
int main (int argc, char **argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("argv[%d] = %s\n", i, argv[i]);
}
return 0;
}
