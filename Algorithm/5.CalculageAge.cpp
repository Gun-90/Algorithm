#include <stdio.h>

void CalculateAge()
{
	char registrationNum[20];
	int year, age;
	scanf("%s", &registrationNum);
	year = (registrationNum[0] - 48) * 10 + (registrationNum[1] - 48);
	if (registrationNum[7] == '1' || registrationNum[7] == '2')
	{
		year += 1900;
	}
	else
	{
		year += 2000;
	}
	age = 2019 - year + 1;
	printf("%d ", age);
	if (registrationNum[7] == '1' || registrationNum[7] == '3')
	{
		printf("M\n");
	}
	else
	{
		printf("W\n");
	}
}