void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	val;

	index = 0;
	val = 0;
	while (index < (size / 2))
	{
		val = tab[index];
		tab[index] = tab[(size - 1 - index)];
		tab[(size - 1 - index)] = val;
		index++;
	}
}
