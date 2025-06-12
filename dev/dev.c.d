#include <stdio.h>
#include <stdlib.h>

typedef struct	s_node
{
	struct s_node *prev;
	int	x;
	struct s_node *next;
}	t_node;

void	deallocate(t_node **tail, t_node **head)
{
	t_node *curr = *tail;

	if (!(*tail))
		return ;

	while(curr->next)
	{
		curr = curr->next;
		free(curr->prev);
	}
	free(curr);
	*tail = NULL;
	*head = NULL;
}

void	print_f(t_node *tail)
{
	t_node *cur;

	cur = tail;
	while (cur)
	{
		printf("%i ", cur->x);
		cur = cur->next;
	}
}

void	print_b(t_node *head)
{
	t_node *cur;

	cur = head;
	while (cur)
	{
		printf("%i ", cur->x);
		cur = cur->prev;
	}
}

void	insert_beginning(t_node **tail, int val)
{
	t_node *new_node = malloc(sizeof(t_node));
	
	if (!new_node)
		exit(1);
	new_node->x = val;
	new_node->prev = NULL;
	new_node->next = *tail;
	if (*tail)
		(*tail)->prev = new_node;
	*tail = new_node;
}

void	insert_end(t_node **head, int val)
{
	t_node	*new_node = malloc(sizeof(t_node));

	if (!new_node)
		exit(1);
	new_node->x = val;
	new_node->prev = *head;
	new_node->next = NULL;

	(*head)->next = new_node;
	*head = new_node;
}

void	insert_after(t_node *node, int val)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
		exit(1);
	new_node->x = val;
	new_node->prev = node;
	new_node->next = node->next;
	if (node->next)
		node->next->prev = new_node;
	node->next = new_node;
}

void	init(t_node **tail, t_node **head, int val)
{
	t_node	*new_node = malloc(sizeof(t_node));
	if (!new_node)
		exit(1);
	new_node->x = val;
	new_node->prev = NULL;
	new_node->next = NULL;

	*tail = new_node;
	*head = new_node;
}

void	remove_node(t_node *node)
{
	if (node->prev)
		node->prev->next = node->next;
	if (node->next)
		node->next->prev = node->prev;
	free(node);
}

t_node	*search_node(t_node *tail, int val, int dir)
{
	t_node	*out;

	while (tail)
	{
		if (tail->x == val)
			return (tail);
		if (dir == 1)
			tail = tail->next;		
		else
			tail = tail->prev;
	}
	return (NULL);
}

int main(int argc, char **argv)
{
	t_node *tail; 
	t_node	*head;

	tail = NULL;
	head = NULL;

	init(&tail, &head, 1);
	insert_end(&head, 3);
	insert_end(&head, 7);
	insert_end(&head, 5);
	insert_end(&head, 9);

	// init(&tail, &head, 7);
	// insert_beginning(&tail, 3);
	// insert_beginning(&tail, 1);

	// insert_after(tail->next, 6);
	// t_node *aux = tail->next;
	// remove_node(tail);
	// tail = aux;
	// remove_node(tail->next);
	
	t_node *search;
	search = search_node(tail, 5, 1);
	// search = search_node(head, 5, 2);
	printf(">>%i<<\n", search->prev->x);
	printf(">>%i<<\n", search->x);
	printf(">>%i<<\n", search->next->x);


	print_f(tail);
	printf("\n");
	print_b(head);
	printf("\n");

	deallocate(&tail, &head);

	return (0);
}
