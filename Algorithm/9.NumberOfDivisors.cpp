#include <stdio.h>

int count[50001];
void NumberOfDivisors()
{
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		for (int j = i; j <= n; j = j + i)
		{
			count[j]++;
		}
	}
	for (int i = 1; i <= n; i++)
	{
		printf("%d ", count[i]);
	}
}