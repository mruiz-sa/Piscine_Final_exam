#include<stdio.h>

void	print_bits(unsigned char octet)
{
	int	i;

	i = 128;
	while (i > 0)
	{
		if (octet >= i)
		{
			write (1, "1", 1);
			octet = octet % i;
			i = i / 2;
		}
		else
		{
			write (1, "0", 1);
			i = i / 2;
		}
	}
}
