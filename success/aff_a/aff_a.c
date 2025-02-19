#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/*



		./a.out hello bye lalal
ARGC =	1		2		3	4
ARGV =	0		1		2	3

*/
int	main(int ac, char** av)
{
	if (ac == 2)
	{
		int i = 0;
		while (av[1][i] != '\0')
		{
			if (av[1][i] == 'a')
			{
				write(1, &av[1][i], 1);
				write(1, "\n", 1);
				return 0;
			}
			i++;
		}
		write(1, "\n", 1);

	}

	else
	{
		write(1, "a\n", 2);

	}
	
	
	return 0;
}