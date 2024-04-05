#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c < ('a' + 26))
	{
		write(1, &c, 1);
		c = c + 1;
	}
}
