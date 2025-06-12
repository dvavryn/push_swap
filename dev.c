#include <stdio.h>
#include <stdlib.h>

typedef struct	s_node
{
	struct s_node *prev;
	int	x;
	struct s_node *next;
}	t_node;

int main(int argc, char **argv)
{
	t_node *tail = malloc(sizeof(t_node));
	if (!tail)
		return (1);

	tail->x = 1;
	tail->prev = NULL;
	tail->next = malloc(sizeof(t_node));
	if (!tail->next)
		return (2);

	tail->next->x = 3;
	tail->next->prev = tail;
	tail->next->next = malloc(sizeof(t_node));
	if (!tail->next->next)
		return (3);

	tail->next->next->x = 7;
	tail->next->next->prev = tail->next;
	tail->next->next->next = NULL;
	t_node	*head = tail->next->next;

	t_node	*cur_f = tail;
	while (cur_f)
	{
		printf("%i\n", cur_f->x);
		cur_f = cur_f->next;		
	}

	t_node	*cur_b = head;
	while (cur_b)
	{
		printf("%i\n", cur_b->x);
		cur_b = cur_b->prev;		
	}


	return (0);
}
