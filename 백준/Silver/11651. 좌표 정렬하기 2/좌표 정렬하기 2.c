#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int x;
	int y;
}coord;

int compare(const void* first, const void* second)
{
	coord* a = (coord*)first;
	coord* b = (coord*)second;

	if (a->y < b->y)
		return -1;
	else if (a->y > b->y)
		return 1;
	else
	{
		if (a->x < b->x)
			return -1;
		else
			return 1;
	}
	return 0;
}

int main()
{
	int i, n;
	coord* list;

	scanf("%d", &n);
	list = (coord*)malloc(n * sizeof(coord));

	for (i = 0; i < n; i++)
	{
		scanf(" %d %d", &list[i].x, &list[i].y);
	}

	qsort(list, n, sizeof(list[0]), compare);


	for (i = 0; i < n; i++)
	{
		printf("%d %d\n", list[i].x, list[i].y);
	}
	return 0;
}