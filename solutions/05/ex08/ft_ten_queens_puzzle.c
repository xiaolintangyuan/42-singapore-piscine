#include <unistd.h>

void	ft_d(int *p, int s)
{
	int		i;
	char	c;

	i = 0;
	while (s > i)
	{
		c = '0' + p[i];
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_c(int z[10], int a, int b)
{
	int	i;

	i = 0;
	while (i < a)
	{
		if (z[i] == b
			|| z[a - i - 1] == b - i - 1
			|| z[a - i - 1] == b + i + 1)
			return (0);
		i++;
	}
	return (1);
}

void	ft_b(int gg[10], int a, int *f)
{
	int	i;

	if (a == 10)
	{
		ft_d(gg, 10);
		*a += 1;
	}
	i = 0;
	while (i < 10)
	{
		if (ft_c(gg, a, i))
		{
			gg[a] = i;
			ft_b(gg, a + 1, f);
		}
		i++;
	}
}

void	ft_a(int *qq)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		qq[i] = 0;
		i++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	cb[10];
	int	x;

	x = 0;
	ft_a(cb);
	ft_b(cb, 0, &x);
	return (x);
}
