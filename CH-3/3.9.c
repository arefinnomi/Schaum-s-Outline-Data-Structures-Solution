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

char *SUBSTRING(char *str, int i, int j)
{
	int size = strlen(str);
	char *temp = (char *) malloc(size);
	int  k = 0, m = 0;

	for( k = i - 1; k < j; k++)
	{
		temp[m] = str[k];
		m++;
	}

	puts(temp);

	return temp;
}



int main()
{
	char p[100];

	strcpy(p, SUBSTRING("qazxswedcvfrtgbnhyujmkiolp", 5, 10));

	printf("%s", p);

    return 0;
}
