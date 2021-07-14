#include <iostream>
using namespace std;

void SumNaturalNumber()
{
	int a, b, sum = 0;
	cin >> a >> b;
	for (int i = a; i < b; i++)
	{
		cout << i << " + ";
		sum += i;
	}
	cout << b << " = ";
	sum += b;
	cout << sum;
}