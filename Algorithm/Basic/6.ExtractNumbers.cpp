#include <stdio.h>
#pragma once
static void ExtractNumbers()
{
	char input[100];
	int res = 0, count = 0;
	scanf_s("%s", &input,sizeof(input));
	for (int i = 0; input[i] != '\0'; i++)
	{
		if (input[i] >= '0' && input[i] <= '9')
		{
			res = res * 10 + (input[i] - '0');
		}
	}
	printf("%d\n", res);
	for (int i = 1; i <= res; i++)
	{
		if (res % i == 0)
		{
			count++;
		}
	}
	printf("%d\n", count);
}