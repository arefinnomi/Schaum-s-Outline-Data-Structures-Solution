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


void hanoi(int n, char x, char y, char z)
{
	if(n==0) return;

	hanoi(n-1, x, z, y);
	printf("%d %c %c\n", n, x, z);
	hanoi(n-1, y, x, z);

}

int main()
{
	hanoi(20, 'a', 'b', 'c');
	return 0;
}
