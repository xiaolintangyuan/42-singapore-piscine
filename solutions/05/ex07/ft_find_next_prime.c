int	ft_num(int cc, int gg)
{
	while (gg < cc)
	{
		if (cc % gg == 0)
			return (0);
		gg++;
	}
	return (1);
}

int	ft_sextagon(int cc)
{
	int	is_num;

	cc++;
	is_num = 0;
	while (is_num == 0)
	{
		if (cc % 2 == 0)
			cc++;
		else
		{
			is_num = ft_num(cc, 3);
			if (is_num == 1)
				return (cc);
			cc++;
		}
	}
	return (cc);
}

int	ft_find_next_prime(int cc)
{
	if (cc < 2)
		return (2);
	else if (cc == 2147483647)
		return (2147483647);
	return (ft_sextagon(cc));
}
