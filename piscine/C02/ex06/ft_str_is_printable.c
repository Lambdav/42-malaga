// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
    
    i = 0;
    
    while (str[i] != '\0')
    {
    	if (str[i] < 32 || str[i] > 126)
		{
        	return (0);
		}
		i++;
    }
    return (1);
}

/*
int	main(void)
{
	char	t1[] = "Super Test 123";
	char	t2[] = "Super Test 123€";

	printf("Has printable characters (expecting 1): %d\n", ft_str_is_printable(t1));
	printf("Non-printable characters (expecting 0): %d\n", ft_str_is_printable(t2));
	return (0);
}
*/
