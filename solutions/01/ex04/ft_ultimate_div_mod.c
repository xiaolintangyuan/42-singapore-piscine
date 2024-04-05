void	ft_ultimate_div_mod(int *a, int *b)
{
	int	idiv;
	int	imod;

	idiv = *a / *b;
	imod = *a % *b;
	*a = idiv;
	*b = imod;
}
