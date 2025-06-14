#include <stdio.h>
#include <stdlib.h>

typedef struct s_data
{
	struct s_data *prev;
	int val;
	int index;
	struct s_data *next;
}	t_data;

void	ra(t_data **a);



int main(void)
{
	t_data *a;

	a = malloc(sizeof(t_data));
	a->prev = NULL;
	a->val = 50;
	a->index = 0;
	a->next = malloc(sizeof(t_data));
	a->next->prev = a;
	a->next->val = 700;
	a->next->index = 1;
	a->next->next = malloc(sizeof(t_data));
	a->next->next->prev = a->next;
	a->next->next->val = 25;
	a->next->next->index = 2;
	a->next->next->next = NULL;

	t_data *cur;

	cur = a;
	while (cur)
	{
		printf("%i:\nprev:\t%p\ncur:\t%p\nnext:\t%p\n", cur->index, cur->prev, cur, cur->next);
		cur = cur->next;
	}
	ra(&a);
	printf("\nsa\n\n");
	cur = a;
	while (cur)
	{
		printf("%i:\nprev:\t%p\ncur:\t%p\nnext:\t%p\n", cur->index, cur->prev, cur, cur->next);
		cur = cur->next;
	}

}