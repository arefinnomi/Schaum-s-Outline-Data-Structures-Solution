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

void sort( struct list *ptr)
{
    struct list *i, *j, temp;

    for( i = ptr; i != NULL; i = i->p_next)
    {
        for(j = i; j != NULL; j = j->p_next)
        {
            if( i->id > j->id )
            {
                temp.id = i->id;
                strcpy(temp.str, i->str);

                i->id = j->id;
                strcpy(i->str, j->str);

                j->id = temp.id;
                strcpy(j->str, temp.str);
            }
        }
    }
}


int main()
{
    freopen("in.txt", "r", stdin);
    struct list *p = store();
    nwl;
    nwl;
    traverse(p);

    sort(p);
    nwl;
    nwl;
    traverse(p);


    return 0;
}
