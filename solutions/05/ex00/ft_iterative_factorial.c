int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 0;
	if (nb >= 0)
	{
		res = 1;
		while ((nb - 1) > 0)
		{
			res = nb * (nb - 1);
		}
	}
	return (res);
}
