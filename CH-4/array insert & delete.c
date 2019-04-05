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

int Insert(int *ary, int n, int k, int item)
{
	int i;
	for(i = n - 1; i > k-1; i--) ary[i+1] = ary[i];
	ary[k-1] = item;
	return n+1;


}

int Delete(int *ary, int n, int k, int item)
{
	int i;

	for(i = k - 1; i < n + 1; i++) ary[i] = ary[i+1];
	return n-1;
}



int main()
{
	int ary[100];
	int i;
	int SIZE = 10;
	for(i = 0; i < SIZE; i++) ary[i] = rand();

	for(i = 0; i < SIZE; i++) printf("%d: %d\n",i, ary[i]);


	SIZE = Insert(ary, SIZE, 2, 0);
	for(i = 0; i < SIZE; i++) printf("%d: %d\n",i, ary[i]);

	SIZE = Delete(ary, SIZE, 2, 0);
	for(i = 0; i < SIZE; i++) printf("%d: %d\n",i, ary[i]);


	return 0;
}
