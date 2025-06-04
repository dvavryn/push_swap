#include "push_swap.h"

int main(int argc, char **argv)
{
	step_one(argc, argv);

	return (0);
}

void	step_one(int argc, char **argv)
{
	char **args;

	if (argc < 2)
	{
		ft_printf("ERROR\n");
		exit(1);
	}
	args = get_args(argc, argv);
	errorcheck(argc, args);
	
}

char **get_args(int argc, char **argv)
{
	char	**out;

	if (argc == 2)
	{
		out = ft_split(argv[1], ' ');
		if (!out)
		{
			ft_printf("ERROR\n");
			exit(1);
		}
	}
	else
		out = argv + 1;
	return (out);
}
