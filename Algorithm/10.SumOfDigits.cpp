#include <stdio.h>
#include <limits>
using namespace std;
int digit_sum(int x) {
	int sum = 0, tmp;
	while (x > 0) {
		tmp = x % 10;
		sum = sum + tmp;
		x = x / 10;
	}
	return sum;
}

int SumOfDigits() {
	//freopen("input.txt", "rt", stdin);
	int n, num, i, sum, max = numeric_limits<int>::max(), res;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &num);
		sum = digit_sum(num);
		if (sum > max) {
			max = sum;
			res = num;
		}
		else if (sum == max) {
			if (num > res) res = num;
		}
	}
	printf("%d\n", res);
	return 0;
}