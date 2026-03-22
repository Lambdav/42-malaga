// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
    
    i = 0;
    
    while (str[i] != '\0')
    {
    	if (!(str[i] >= '0' && str[i] <= '9'))
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
	char	t1[] = "123test";
	char	t2[] = "123";
	char	t3[] = "";

	printf("Numbers and letters (expecting 0): %d\n", ft_str_is_numeric(t1));
	printf("Only numbers (expecting 1): %d\n", ft_str_is_numeric(t2));
	printf("Empty (expecting 1): %d\n", ft_str_is_numeric(t3));
	return (0);
}
*/
