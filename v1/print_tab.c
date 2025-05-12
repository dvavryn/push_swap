#include <stdio.h>

int	*sa(int *a)
{
	int	buf;
	
	buf = a[0];
	a[0] = a[1];
	a[1] = buf;
	return (a);
}

int main(void)
{
	int a[10];

	a[0] = 0;
	a[1] = 1;
	a[2] = 2;
	a[3] = 3;
	a[4] = 4;
	a[5] = 5;
	a[6] = 6;
	a[7] = 7;
	a[8] = 8;
	a[9] = 9;

	for (int i = 0; i < 10; i++)
	{
		printf(">%i<   ", a[i]);
	}
	sa(a);
	printf("\n\n");
	for (int i = 0; i < 10; i++)
	{
		printf(">%i<   ", a[i]);
	}
}