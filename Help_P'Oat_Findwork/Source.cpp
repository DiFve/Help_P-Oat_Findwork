#include<stdio.h>
#include<math.h>
int main()
{
	long n;
	scanf_s("%ld", &n);
	long file[10000], count = 0;
	for (int i = 0; i < n; i++)
	{
		scanf_s("%ld", &file[i]);
		if (abs(file[i] % 2) == 1)	count++;
	}
	printf("%ld", count);
	return 0;
}