#include <iostream>
#include <limits>
using namespace std;

// ���� ���� ���� ����� ��������� ���� ����
void AgeDifference()
{
	int N, age, max = 0, min = numeric_limits<int>::min();

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> age;
		if (age > max)
		{
			max = age;
		}
		if (age < min)
		{
			min = age;
		}
	}
	cout << max - min;
}