// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
    
    i = 0;
    
    while (str[i] != '\0')
    {
    	if (!(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z'))
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
	char	t1[] = "supertest";
	char	t2[] = "test123";
	char	t3[] = "";

	printf("Only letters (expecting 1): %d\n", ft_str_is_alpha(t1));
	printf("Has numbers (expecting 0): %d\n", ft_str_is_alpha(t2));
	printf("Empty (expecting 1): %d\n", ft_str_is_alpha(t3));
	return (0);
}
*/
