#include <stdio.h>
#include <stdlib.h>

typedef struct s_node
{
	int				val;
	struct s_node	*prev;
	struct s_node	*next;
}	t_node;

void	deallocate(t_node **tail, t_node **head)
{
	if (*tail == NULL);

	t_node *curr = *tail;
	
	while (curr->next != NULL)
	{
		curr = curr->next;
		free(curr->prev);
	}
	free(curr);

	*tail = NULL;
	*head = NULL;
}

void	insert_beginning(t_node **tail, int value)
{
	t_node	*new_node = malloc(sizeof(t_node));
	if (new_node == NULL)
	{
		exit(1);
		return ;
	}

	new_node->val = value;
	new_node->prev = NULL;
	new_node->next = *tail;
	(*tail)->prev = new_node;
	*tail = new_node;
}

void	insert_end(t_node **head, int value)
{
	t_node *new_node = malloc(sizeof(t_node));
	if (new_node == NULL)
	{
		exit(1);
		return ;
	}

	new_node->val = value;
	new_node->prev = *head;
	new_node->next = NULL;
	(*head)->next = new_node;
	*head = new_node;
}

int main(int argc, char **argv)
{

	t_node *tail = malloc(sizeof(t_node));
	if (tail == NULL)
		return (1);
	tail->val = 1;
	tail->prev = NULL;
	tail->next = malloc(sizeof(t_node));
	if (tail->next == NULL)
		return (2);
	tail->next->prev = tail;
	tail->next->val = 3;
	tail->next->next = malloc(sizeof(t_node));
	if (tail->next->next == NULL)
		return (3);
	tail->next->next->prev = tail->next;
	tail->next->next->val = 7;
	tail->next->next->next = NULL;
	t_node *head = tail->next->next;
	
	insert_beginning(&tail, 4);
	insert_beginning(&tail, 8);
	insert_end(&head, 15);
	insert_end(&head, 20);

	t_node *curr = tail;
	while (curr != NULL)
	{
		printf("%d\n", curr->val);
		curr = curr->next;
	}

	deallocate(&tail, &head);
	return (0);
}