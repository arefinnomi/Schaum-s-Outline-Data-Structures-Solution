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

struct list
{
    int id;
    char str[100];
    struct list *p_next;
};

int SIZE = sizeof(struct list);

struct list *store(void)
{
    struct list *ptr = NULL;

    puts("do you wanna input? (y/n) ");

    char ch[2];
    gets(ch);

    if( strcmp(ch, "y") ) return ptr;

    ptr = malloc(SIZE);
    printf("enter student id: ");
    scanf("%d", &ptr->id);
    getchar();
    printf("enter student name: ");
    gets(ptr->str);

    ptr->p_next = store();

    return ptr;

}

void traverse( struct list *p)
{
    if( p == NULL ) return;
    printf("%d %s\n", p->id, p->str);
    traverse(p->p_next);
}

struct list *Find( struct list *ptr, int key)
{
	if( ptr == NULL ) return ptr;

	if( ptr->id == key) return ptr;
	else return Find( ptr->p_next, key);
}


int main()
{
	freopen("in.txt", "r", stdin);
    struct list *p = store();
    traverse(p);

    struct list *item_loc = Find( p, 5);

	if( item_loc == NULL) printf("Not Found.\n");
    else printf("%s\n", item_loc->str);
    return 0;
}
