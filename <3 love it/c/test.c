#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *buffer;
	buffer = (char *)calloc(4, 1);
	
	while (1)
	{
		read(1, buffer, 4);
		if (strcmp(buffer, "sa"))
		{
			printf("swap a");
			// break ;
		}
	}
}