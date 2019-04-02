#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

typedef unsigned int UI;
typedef long long int LLI;
typedef unsigned long long int ULLI;
typedef long double LLF;
typedef double LF;


#define nwl puts("");

struct string
{
    char info;
    struct string *p;


};

int SIZE = sizeof(struct string);
struct string * make_string(char *str)
{
    struct string *New = malloc(SIZE);
    New->info = *str;
    New->p = NULL;

    str++;

    if( *str )
    {
        New->p = (struct string *) make_string(str);
    }
    return New;
}

void print_string(struct string *New)
{
    printf("%c", New->info);

	if( New->p == NULL) return;

	print_string(New->p);
}


int main()
{
    struct string *New = (struct string *) make_string("affgfsdgdfsgf");

    print_string(New);

    return 0;
}
