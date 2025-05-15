int	*init_tab(char **argv);

int main(int argc, char **argv)
{
	int *a = init_tab(argv+1);
	int i = 0;
	while (i < argc - 1)
	{
		printf("%i", a[i]);
		i++;
	}
}