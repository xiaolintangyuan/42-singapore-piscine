#include <unistd.h>

int	ft_check_printable(char *str)
{
	if (*str < 32 || *str > 126)
		return (0);
	return (1);
}

void	ft_putstr_non_printable(char *str)
{
	char	hex[4];

	while (*str != '\0')
	{
		if (ft_check_printable(str))
			write(1, str, 1);
		else
		{
			hex[0] = '\\';
			hex[1] = "0123456789ABCDEF"[(unsigned char)*str / 16];
			hex[2] = "0123456789ABCDEF"[(unsigned char)*str % 16];
			hex[3] = '\0';
			write(1, hex, 3);
		}
		str = str + 1;
	}
}
