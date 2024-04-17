#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <sys/types.h>
#include "libft/libft.h"

void	send_signals(int pid, char *message)
{
	int i;
	int bit_counter;

	i = 0;
	while (message[i] != '\0')
	{	
		bit_counter = 7;
		while (bit_counter >= 0)
		{
			if ((message[i] >> bit_counter) & 1)
			{
				kill(pid, SIGUSR2);
			}
			else
			{
				kill(pid, SIGUSR1);
			}
			bit_counter--;
			usleep(500);
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	char	*new_line; 
	
	new_line = "\n";
	if (ac != 3)
	{
		ft_putstr_fd("Input should be: <executable> <PID number> <string to send>\n", 1);
		exit(1);
	}
	int pid = ft_atoi(av[1]);
	send_signals(pid, av[2]);
	send_signals(pid, new_line);
	return 0;
}