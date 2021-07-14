#include <iostream>
using namespace std;

// 진약수의 합
void SumProperDivisor()
{
	int N, sum = 1;
	cin >> N;
	cout << "1";
	for (int i = 2; i < N; i++)
	{
		if ((N % i) == 0)
		{
			cout << " + " << i;
			sum += i;
		}
	}
	cout << " = " << sum;
}