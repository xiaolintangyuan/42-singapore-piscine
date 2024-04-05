int	ft_iterative_power(int myself, int power)
{
	int	greed;

	greed = 0;
	if (myself == 0 && power == 0)
	{
		return (1);
	}
	else if (power < 0)
	{
		return (0);
	}
	else
	{
		greed = myself;
		while (power > 0)
		{
			greed *= myself;
			power--;
		}
	}
	return (greed);
}
