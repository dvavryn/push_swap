#include "push_swap.h"

int main(int argc, char **argv)
{
	if (argc != 2)
		return (error());
	if (argc == 2)
	{
		single(argv[1]);
	}
	else
		multi(argv);
}
