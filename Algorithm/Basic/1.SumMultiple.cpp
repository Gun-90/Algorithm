#include <iostream>
using namespace std;

void SumMultiple()
{
	int N, M, Sum = 0;
	cin >> N >> M;
	for (int i = 1; i <= N; i++)
	{
		if (i % M == 0)
		{
			Sum += i;
		}
	}
	cout << Sum;
}