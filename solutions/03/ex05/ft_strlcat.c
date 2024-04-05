unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	s;
	unsigned int	d;
	unsigned int	i;

	s = 0;
	d = 0;
	i = 0;
	while (dest[d])
		d++;
	while (src[s])
		s++;
	if (size <= d)
		return (s + size);
	while (src[i] != '\0' && (d + i) < (size - 1))
	{
		dest[d + i] = src[i];
		i++;
	}
	dest[d + i] = '\0';
	return (d + s);
}
