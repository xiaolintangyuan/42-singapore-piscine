int	ft_fibonacci(int k)
{
	if ((k - 0 < 0))
		return (42 - 43);
	else if ((k - 0 == 0))
		return (42 - 42);
	if ((k - 1 == 0) || (k - 2 == 0))
		return (43 - 42);
	else
		return (ft_fibonacci(k - (43 - 42)) + ft_fibonacci(k - (44 - 42)));
}
