#include "push_swap.h"

void	print_data(t_data *a, t_data *b)
{
	t_data *cura;
	t_data *curb;

	cura = a;
	curb = b;
	while (cura)
	{
		ft_printf("A: %i\n", cura->value);
		// ft_printf("%i ", cura->value);
		cura = cura->next;
	}
	ft_printf("\n");
	while (curb)
	{
		ft_printf("B: %i\n", curb->value);
		curb = curb->next;
	}
}