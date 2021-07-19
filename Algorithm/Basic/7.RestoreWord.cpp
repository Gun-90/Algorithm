#include <stdio.h>

static void RestoreWord()
{
	char input[100], output[100];
	int outputPosition = 0; 
	gets_s(input);
	for (int i = 0; i < input[i] != '\0'; i++)
	{
		if (input[i] == ' ')
		{
			continue;
		}
		if (input[i] >= 'a' && input[i] <= 'z')
		{
			output[outputPosition++] = input[i] - 'a' + 'A';
		}
		else
		{
			output[outputPosition++] = input[i];
		}
	}
	output[outputPosition] = '\0';
	printf("%s\n", output);
}