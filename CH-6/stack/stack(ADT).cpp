                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                #include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

typedef unsigned int UI;
typedef long long int LLI;
typedef unsigned long long int ULLI;
typedef long double LLF;
typedef double LF;


#define nwl puts("")
#define MAX 10
int ary[MAX];
int _front = 0, rear = 0, size = 0;

bool _insert(int item)
{
	printf("%d %d %d\n",_front, rear, size );

	if( size == MAX) return 0;
    if( _front <= rear) {if( rear < MAX) { ary[rear++] = item; size++;  rear %= MAX; return 1;}}
    else if( rear < _front) { ary[rear++] = item; size++;  rear %= MAX; return 1;}
    return 0;

}

bool _delete ( void)
{
	if( !size) return 0;
    _front++; size--; _front %= MAX; return 1;
}
int front(void)
{
    if( size) return ary[_front];
    return -1;
}


int main()
{
//	freopen("i.txt", "r", stdin);
//	freop