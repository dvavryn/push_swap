#include "../push_swap.h"

void	print(t_data stacks);
void	pass_1(t_data stacks);
void	change(t_data stacks);
void	sa(t_data *stacks);


int main(void)
{
	int *a = malloc(6 * sizeof(int));
	int *b = malloc(6 * sizeof(int));

	size_t i = 0;
	while (i < 6)
	{
		a[i] = i + 1;
		b[i] = 0;
		i++;
	}
	size_t sa = 6;
	size_t sb = 0;

	t_data stacks;

	stacks.a = a;
	stacks.b = b;
	stacks.sa = sa;
	stacks.sb = sb;

	print(stacks);
}

void	print(t_data stacks)
{
	size_t	i;

	pass_1(stacks);
	i = 0;
	while (i < stacks.sa)
	{
		printf("%i ", stacks.a[i]);
		i++;
	}
	printf("\n");
	i = 0;
	while (i < stacks.sb)
	{
		printf("%i ", stacks.b[i]);
		i++;
	}
}
void pass_1(t_data stacks)
{
	change(stacks);
}

void	change(t_data stacks)
{
	sa(&stacks);
}

void sa(t_data *stacks)
{
	int tmp = stacks->a[0];
	stacks->a[0] =stacks->a[1];
	stacks->a[1] = tmp;
}