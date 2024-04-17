#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <signal.h>
#include "libft/libft.h"


int	g_binary_count = 0;

int convert_to_int(char *binary)
{
	int	n;
	int	power_of_2;
	int	index;

	n = 0;
	power_of_2 = 1;
	index = 7;
	while (index >= 0)
	{
		if (binary[index] == '1')
		{
			n += power_of_2;
		}
		power_of_2 *= 2;
		index--;
	}
	return (n);
}


void	handler_sigusr1(int signum)
{
	char	binary[9];
	int		result;

	if (signum == SIGUSR1)
	{
		binary[g_binary_count++] = '0';
	}
	else if (signum == SIGUSR2)
	{
		binary[g_binary_count++] = '1';
	}
	if (g_binary_count == 8)
	{
		binary[g_binary_count] = '\0';
		result = convert_to_int(binary);

		if (result == 10)
		{
			ft_putchar_fd('\n', 1);
		}
		else
			ft_putchar_fd(result, 1);
		g_binary_count = 0;
	}
}

int	main()
{
	pid_t	pid;

	pid = getpid();
	ft_putnbr_fd(pid, 1);
	ft_putchar_fd('\n', 1);
	while(1)
	{
		signal(SIGUSR1, handler_sigusr1);
		signal(SIGUSR2, handler_sigusr1);
	}
	return (0);
}

