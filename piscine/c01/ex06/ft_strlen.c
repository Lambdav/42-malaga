/*
#include <stdio.h>
*/

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
int	main(void)
{
	char	*s;
	int		len;

	s = "Hello World";
	len = ft_strlen(s);
	printf("String: '%s' -> Lenght: %d\n", s, len);
	return (0);
}
*/
