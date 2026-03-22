// #include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthex(unsigned char n)
{
	char	*base;

	base = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(base[n / 16]);
	ft_putchar(base[n % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			ft_puthex(str[i]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}

/*
int	main(void)
{
    char	c[] = "Coucou\ntu vas bien ?";
    printf("\nBefore: %s\n", c);
    ft_putstr_non_printable(c);
}
*/
