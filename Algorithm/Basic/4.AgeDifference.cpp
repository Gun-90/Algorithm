#include <iostream>
#include <limits>
using namespace std;

// 가장 나이 많은 사람과 적은사람의 나이 차이
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