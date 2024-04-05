#include <unistd.h>

void	ft_putstr(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		write(1, &str[len], 1);
		len++;
	}
}
