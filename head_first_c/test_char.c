#include<stdio.h>
#include<stdlib.h>

int main()
{
    char chars[6] = {"Hello"};
    printf(" strlen() is %i ", strlen(chars));
    printf(" sizeof() is %i ",sizeof(chars));

    char some_char[10] = "World";
      printf(" strlen() is %i ", strlen(some_char));
    printf(" sizeof() is %i ",sizeof(some_char));

    return 0;
}