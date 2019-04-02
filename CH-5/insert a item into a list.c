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

struct list * Delete( struct list *ptr, int node)
{
    struct list * start = ptr;
    struct list *temp;
    if(node == 1)
    {
        temp = ptr->p_next;
        free( ptr);
        return temp;
    }

    while( ptr != NULL && node-- > 2)
    {
        ptr = ptr ->p_next;
    }


    if( ptr )
    {
        temp = ptr->p_next;
        ptr->p_next = ptr->p_next->p_next;
        free( temp);
    }
    return start;
}

struct list * Insert( struct list *ptr, int node, struct list item)
{
    struct list * start = ptr;
    struct list *New = malloc(SIZE);
    *New = item;
    if(node == 0)
    {
        New->p_next = ptr;
        return New;
    }

    while( ptr != NULL && node-- > 1)
    {
        ptr = ptr ->p_next;
    }

    New->p_next = ptr->p_next;
    ptr->p_next = New;

    return start;

}

int main()
{
    freopen("in.txt", "r", stdin);
    struct list *p = store();
    traverse(p);

    struct list item;

    item.id = 15;
    strcpy(item.str, "mitu");

    p = Insert(p, 3, item);
    p = Insert(p, 1, item);
    p = Insert(p, 0, item);

    nwl;
    traverse(p);

    p = Delete(p, 1);
    p = Delete(p, 2);
    p = Delete(p, 4);

    nwl;
    traverse(p);




    return 0;
}
