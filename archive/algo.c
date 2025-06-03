
// void	algo(t_data *stacks)
// {
// 	int min;
// 	int max;
	
// 	while (stacks->sa != 0)
// 	{
// 		min = get_min(stacks);
// 		max = get_max(stacks);
		
// 		if ((get_pos(min, stacks) < stacks->sa - get_pos(min, stacks) ? get_pos(min, stacks) : stacks->sa - 1 - get_pos(min, stacks)) <
// 			 get_pos(max, stacks) < stacks->sa - get_pos(max, stacks) ? get_pos(max, stacks) : stacks->sa - 1 - get_pos(max, stacks))
// 		{
// 			while (stacks->a[0] != min)
// 			{
// 				if (get_pos(min, stacks) < stacks->sa - 1 - get_pos(min, stacks))
// 					ra(stacks);
// 				else
// 					rra(stacks);
// 			}
// 		}
// 		else
// 		{
// 			while (stacks->a[0] != max)
// 			{
// 				if (get_pos(max, stacks) < stacks->sa - 1 - get_pos(max, stacks))
// 					ra(stacks);
// 				else
// 					rra(stacks);
// 			}
// 		}
// 		pb(stacks);
// 	}
// 	while (stacks->sb != 0)
// 		pa(stacks);
// 	pa(stacks);
// 	free(stacks->a);
// 	free(stacks->b);
// 	exit(1);
// }
























// void	algo(t_data	*stacks)
// {
// 	int	min;

// 	if (!is_n_sorted(stacks))
// 		exit(1);
// 	while (stacks->sa > 0)
// 	{
// 		min = get_min(stacks);
// 		while (get_pos(min, stacks) != 0)
// 		{
// 			if (get_pos(min, stacks) <= stacks->sa / 2)
// 				ra(stacks);
// 			else
// 				rra(stacks);
// 			if (stacks->a[0] == min)
// 				break ;
// 		}
// 		pb(stacks);
// 	}
// 	while (stacks->sb != 0)
// 		pa(stacks);
// 	pa(stacks);
// 	free(stacks->a);
// 	free(stacks->b);
// 	exit(1);
// }






void	rb_until_max_top(t_data *stacks);
int	get_opt_rot(t_data *stacks, int min_pos, int max_pos);
int	get_maxb(t_data *stacks);

void	algo(t_data *stacks)
{
	int	min;
	int	max;
	int min_pos;
	int max_pos;
	int	optimal_rotation;

	while (stacks->sa > 0)
	{
		min = get_min(stacks);
		max = get_max(stacks);
		min_pos = get_pos(min, stacks);
		max_pos = get_pos(max, stacks);

		optimal_rotation = get_opt_rot(stacks, min_pos, max_pos);
		while (optimal_rotation > 0)
		{
			ra(stacks);
			optimal_rotation--;
		}
		while (optimal_rotation < 0)
		{
			rra(stacks);
			optimal_rotation++;
		}
		pb(stacks);
	}
	while (stacks->sb != 0)
	{
		rb_until_max_top(stacks);
		pa(stacks);
	}
	free(stacks->a);
	free(stacks->b);
	exit(1);	
}

int	get_opt_rot(t_data *stacks, int min_pos, int max_pos)
{
	int min_dist;
	int max_dist;
	int rot;
	
	if (min_pos <= stacks->sa/2)
		min_dist = min_pos;
	else
		min_dist = stacks->sa - min_pos;

	if (max_pos <= stacks->sa/2)
		max_dist = max_pos;
	else
		max_dist = stacks->sa - max_pos;

	if (min_dist <= max_dist)
	{
		if (min_pos <= stacks->sa/2)
			rot = min_pos;
		else
			rot = -(stacks->sa - min_pos);
	}
	else
	{
		if (max_pos <= stacks->sa/2)
			rot = max_pos;
		else
			rot = -(stacks->sa - max_pos);
	}
	return (rot);
}

void	rb_until_max_top(t_data *stacks)
{
	int max_pos;

	max_pos = get_pos(get_maxb(stacks), stacks);
	if (max_pos <= stacks->sb / 2)
	{	
		while(stacks->b[0] != get_maxb(stacks))
		{
			rb(stacks);
		}
	}	
	else
	{
		while(stacks->b[0] != get_maxb(stacks))
		{
			rrb(stacks);
		}
	}
	
}

int	get_maxb(t_data *stacks)
{
	int		max;
	size_t	i;

	max = -2147483648;
	i = 0;
	while (i < stacks->sb)
	{
		if (stacks->b[i] > max)
			max = stacks->b[i];
		i++;
	}
	return (max);
}
