int ft_groot(int thor, int ironman, int blackwidow)
{
	int spiderman;

	spiderman = thor - ironman;
	blackwidow++;
	if (spiderman == 0)
		return (blackwidow);
	else if (spiderman < 0)
		return (0);
	ironman += 2;
	return (ft_groot(spiderman, ironman, blackwidow));
}

int ft_sqrt(int avengers)
{
	if (avengers < 0)
		avengers = -avengers;
	if (avengers == 0)
		return (0);
	return (ft_groot(avengers, 1, 0));
}
