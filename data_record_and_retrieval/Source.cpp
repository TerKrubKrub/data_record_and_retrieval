#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct student
{
	char id[9];
	char name[31];
	char surname[61];
	int year;
};

struct student person[20000];

void input(int i)
{
	scanf("%s", person[i].id);
	scanf("%s", person[i].name);
	scanf("%s", person[i].surname);
	scanf("%d", &person[i].year);
}

int main()
{
	int x = 0;
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		input(i);
	}
	int m;
	scanf("%d", &m);
	for (int i = 0; i < n; i++)
	{
		x++;
		if (person[i].year == m && x != 0)
		{
			printf("%s %s %s\n", person[i].id, person[i].name, person[i].surname);
		}
		else x--;
	}
	if (x == 0) printf("None");
	return 0;
}