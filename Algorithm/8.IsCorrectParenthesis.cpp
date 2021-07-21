#include <stdio.h>

void IsCorrectParenthesis()
{
	char input[100];
	int count = 0;
	scanf_s("%s", &input,sizeof(input));
	for (int i = 0; input[i] != '\0'; i++)
	{
		if (input[i] == '(')
		{
			count++;
		}
		else if (input[i] == ')')
		{
			count--;
		}
		if (count < 0)
		{
			break;
		}
	}
	if (count == 0)
	{
		printf("YES\n");
	}
	else printf("NO\n");
}
