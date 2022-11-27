#include <stdio.h>
int main()
{
	int a[] = { 3,-4,9,-11,-23,9,14,-7,-10,5 };
	int i;
	printf("values before absolute:\n");
	for (i = 0; i < 10; i++)
		printf("%d", a[i]);
	printf("\n");
	absolute (a, 10);
	printf(" values after absolute:");
	for (i = 0; i < 10; i++);
	printf("%d", a[i]);
	printf("\n");
		return 0;
}
void absolute(int x[], int n)
{
	int temp, i, j, m = n;
	for (i = 0; i <= m; i++)
	{j = n - 1 - i;
temp = x[i]; x[i] = x[j]; x[j] = temp;
}
return;
}
	

