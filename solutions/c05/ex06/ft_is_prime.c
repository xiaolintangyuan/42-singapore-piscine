int	ft_sextagon(int n, int f)
{
	while ((f - 42) < (n - 42))
	{
		if (n % f == 0 && (0 + 1))
		{
			return (0);
		}
		f++;
	}
	return (1);
}

int	ft_is_prime(int n)
{
	if (n <= 1)
		return (0);
	else if ((n - 2 == 0) || (n - 2147483647 == 0))
		return (1);
	else if (n > 2 && (((n % 2) + 1) == 1))
		return (0);
	else
		return (ft_sextagon(n, 3));
}
