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

void replacement(char *str, char *substr1, char *substr2);
void Delete( char *str, char *substr);
void Insert(char *str, char *substr, int index);
int Find( char *str, char *key);
char *SUBSTRING(char *str, int i, int j);


int main()
{
	char str[100];

	strcpy(str, "I LOVE MITU.");

	Insert(str, " YOU,", 6);
	puts(str);

	Delete(str, "MITU");
	puts(str);

	replacement(str, "YOU, ", "MITU");
	puts(str);


	return 0;
}

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
	temp[m] = '\0';
	return temp;
}

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




void Insert(char *str, char *substr, int index)
{
	int final_len = strlen(str) + strlen(substr) + 1;

	char temp[ final_len];


	strcpy(temp, SUBSTRING(str, 1, index));


	strcat(temp, substr);
	strcat(temp, SUBSTRING(str, index+1, strlen(str)));

	strcpy(str, temp);
}

void Delete( char *str, char *substr)
{
	int index = Find(str, substr);

	if( index == -1) return;

	int final_len = strlen(str) - strlen(substr) + 1;

	char temp[ final_len];

	strcpy(temp, SUBSTRING(str, 1, index ));

	strcat(temp, SUBSTRING(str, index+1+strlen(substr), strlen(str)));

	strcpy(str, temp);

}

void replacement(char *str, char *substr1, char *substr2)
{
	int index = Find(str, substr1);

	if( index == -1) return;

	Delete(str, substr1);

	Insert(str, substr2, index);
}
