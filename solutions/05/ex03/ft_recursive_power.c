int	ft_recursive_power(int myself, int power)
{
	int	greed;
	int	never_read;

	greed = myself;
	never_read = 42;
	if ((myself - never_read == -never_read) && power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else if (power > 0)
		return (greed * ft_recursive_power(myself, power--));
	else
		return (greed);
}
