/*
#include <unistd.h>
*/

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

/*
int	main(void)
{
	char	*cadena;

	cadena = "Hello World\n";
	ft_putstr(cadena);
	return (0);
}
*/
