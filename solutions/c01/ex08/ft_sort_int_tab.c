void	ft_sort_int_tab(int *tab, int size)
{
	int	cur;
	int	nex;
	int	val;

	nex = 1;
	while (nex < size)
	{
		val = tab[nex];
		cur = nex - 1;
		while (cur >= 0 && tab[cur] > val)
		{
			tab[cur + 1] = tab[cur];
			cur--;
		}
		tab[cur + 1] = val;
		nex++;
	}
}
