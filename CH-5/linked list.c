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

struct student{
	char name[80];
	char id[10];
	float gpa;
	struct student *p_next;
};

int SIZE = sizeof(struct student);

void insert( struct student *p)
{
	printf("enter student name: ");
	gets(p->name);
	printf("enter student id: ");
	gets(p->id);
	printf("enter student gpa: ");
	scanf("%f", &p->gpa);

	printf("want to input more data? (y/n): ");
	getchar();
	char promte[2];
	gets(promte);

	if( !strcmp(promte, "y") )
	{
		p->p_next = malloc(SIZE);

		insert(p->p_next);
		return;
	}

	p->p_next = NULL;

}

void traverse( struct student *p)
{
	static int n = 1;
	if( p == NULL ) return;
	printf("%d. name: %s id: %s gpa: %f\n",n++, p->name, p->id, p->gpa);
	traverse(p->p_next);
}



int main()
{
	struct student *archive = malloc(SIZE);

	insert(archive);
	traverse(archive);

	return 0;
}
