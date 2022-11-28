#include<stdio.h>
int main()
{
	int a[] = { 3,-4,9,11,-23,9,14,-7,-10,5 };
	int i;
	void absolute(int* x, int y);
	printf("Values before absolute; ");
	for (i = 0; i < 10; i++)
		printf("%d ", a[i]);
	printf("\n");
	absolute(a, 10);
	printf("Values after absolute: ");
	for (i = 0; i < 10; i++)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}
void absolute(int* x, int y)
{
	int i;
	for (i = 0; i < 10; i++, x++)
	{
		if (*x < 0)
			*x = -*x;
	}
}

