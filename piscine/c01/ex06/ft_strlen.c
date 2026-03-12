int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

/*
#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	*s = "42 Madrid";
	int		len;

	len = ft_strlen(s);
	printf("Cadena: '%s' -> Longitud: %d\n", s, len);
	return (0);
}
*/
