#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	double q = 0, w = 1, e = 0;
	for (q = 2; q <= n; q++)
	{
		e = 1;
		e /= q;
		w += e;
	}
	printf("%lf\n", w);
	return 0;
}