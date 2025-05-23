int main(int argc, char **argv)
{
	if (argc != 2)
		return (error());
	if (argc == 2)
		return (split(argv[1]));
	else
		(go_on(argv));
}

int	split(char *str)
{
	s
}



int	error(void)
{
	printf("ERROR\n");
	return (-1);
}
