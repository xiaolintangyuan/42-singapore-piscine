int	ft_a(char c)
{
	if (c >= 65 && c <= (65 + 25))
	{
		return (1);
	}
	else if (c >= 97 && c <= (97 + 25))
	{
		return (2);
	}
	else if (c >= 48 && c <= 57)
	{
		return (3);
	}
	else
	{
		return (0);
	}
}

void	ft_b(char *c)
{
	if (ft_char_isalphanum(*c) == 2)
	{
		*c -= 32;
	}
}

void	ft_c(char *c)
{
	if (ft_char_isalphanum(*c) == 1)
	{
		*c += 32;
	}
}

char	*ft_strcapitalize(char *str)
{
	char	b;
	int		type_b;
	int		type_a;
	int		i;

	ft_b(str);
	i = 1;
	while (*(str + i))
	{
		b = *(str + i - 1);
		type_b = ft_a(b);
		type_a = ft_a(*(str + i));
		if (type_b == 0)
			ft_b(str + i);
		else
			ft_c(str + i);
		i++;
	}
	return (str);
}
