#include <unistd.h>

#define MAX_PAGE_SIZE 16

void	ft_buffer_number(int num, int radix, int buffer[], int index)
{
	if (num > radix - 1)
		ft_buffer_number(num / radix, radix, buffer, index + 1);
	buffer[index] = num % radix;
}

void	ft_write_hex(unsigned long number, int radix, int char_count)
{
	int		buffer[MAX_PAGE_SIZE];
	int		index;
	char	*hex;

	hex = "0123456789ABCDEF";
	index = 0;
	while (index < MAX_PAGE_SIZE - 1)
	{
		buffer[index] = 0;
		index++;
	}
	ft_buffer_number(number, radix, buffer, 0);
	index = 0;
	while (index < char_count)
	{
		write(1, &hex[buffer[char_count - 1 - index]], 1);
		index++;
	}
}

void	ft_write_content(unsigned char *c)
{
	if (*c >= ' ' && *c != 127)
		write(1, c, 1);
	else
		write(1, &".", 1);
}

void	ft_print_memory_at(void *addr, unsigned int size, char *curr_addr)
{
	unsigned long	curr_addr_int;
	int				index;

	curr_addr_int = (unsigned long)curr_addr;
	ft_write_hex(curr_addr_int, MAX_PAGE_SIZE, MAX_PAGE_SIZE);
	write(1, &": ", 2);
	index = 0;
	while (index < 16)
	{
		if (addr + size <= (void *)(curr_addr + index))
			write(1, &"  ", 2);
		else
			ft_write_hex((unsigned char)*(curr_addr + index), 16, 2);
		if (index % 2 == 1)
			write(1, &" ", 1);
		index++;
	}
	index = 0;
	while (index < 16)
	{
		if (addr + size > (void *)(curr_addr + index))
			ft_write_content((unsigned char *)curr_addr + index);
		index++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char	*curr_addr;

	curr_addr = (char *)addr;
	while ((void *)curr_addr < (addr + size))
	{
		ft_print_memory_at(addr, size, curr_addr);
		write(1, &"\n", 1);
		curr_addr += 16;
	}
	return (addr);
}
