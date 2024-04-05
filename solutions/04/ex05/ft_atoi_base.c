int	ft_get_digit(char s, char *base)
{
	int	n;

	n = 0;
	while (base[n] != 0 && base[n] != s)
		n++;
	return (n);
}

int	ft_verify(char *base)
{
	int	i;
	int	o;

	i = 0;
	o = 0;
	while (base[i])
	{
		o = 0;
		while (o < i)
		{
			if (base[i] == base[o] || (base[i] >= 9 && base[i] <= 13)
				|| base[i] == 32 || base[i] == '-' || base[i] == '+')
				return (0);
			o++;
		}
		i++;
	}
	if (i <= 1)
		return (0);
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	basesize;
	int	nb;
	int	neg;

	nb = 0;
	neg = 1;
	basesize = ft_verify(base);
	if (basesize <= 1)
		return (0);
	while (*str != 0 && ((*str >= 9 && *str <= 13) || *str == 32))
		str++;
	while (*str != 0 && (*str == '-' || *str == '+'))
	{
		if (*str++ == '-')
			neg *= -1;
	}
	while (*str != 0 && (ft_get_digit(*str, base) < basesize))
	{
		nb = (basesize * nb) + (ft_get_digit(*str, base));
		str++;
	}
	return (nb * neg);
}
