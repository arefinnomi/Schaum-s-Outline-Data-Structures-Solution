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

void quick(int *ary, int a, int z)
{
    if( a >= z) return;
    int left = a + 1;
    int right = z;
    int temp;

    while( left < right)
	{
		while( ary[left] < ary[a] && left <= z) left++;
		while( ary[right] > ary[a] && right > a)

    temp = ary[left-1];
    ary[left-1] = ary[a];
    ary[a] = temp;

    quick(ary, a, left-1-1);
    quick(ary, left, z);

}


int main()
{
    int ary[20];
    int i;
    for(i = 0; i < 20; i++) ary[i] = rand() % 20;
    for(i = 0; i < 20; i++) printf("%d ", ary[i]);
    nwl;
    quick(ary, 0, 20-1);
    for(i = 0; i < 20; i++) printf("%d ", ary[i]);
    return 0;
}
