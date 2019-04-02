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

int Find( char *str, char *key)
{
    int i, j;
	int size_str = strlen(str);
	int size_key = strlen(key);

    for( i = 0; i < size_str; i++)
	{
		if( str[i] == key[0])
		{
			for(j = 1; j < size_key; j++)
			{
				if( str[i+j] != key[j] ) break;
			}
		}
		if( j == size_key) break;
	}

	if( i == size_str) return -1;

	return i;
}

int main()
{

    return 0;
}
