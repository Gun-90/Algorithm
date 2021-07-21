#include <vector>
#include <limits>
#include "4.9.1.ineffecientMaxSum.cpp";
using namespace std;
// int MIN = numeric_limits<int>::min();
int betterMaxSum(const vector<int>& A) 
{
	int N = A.size(), ret = MIN;
	for (int i = 0; i < N; ++i)
	{
		int sum = 0;
		for (int j = i; j < N; ++j)
		{
			sum += A[j];
			ret = max(ret, sum);
		}
	}
	return ret;
}