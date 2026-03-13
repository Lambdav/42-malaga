// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
    
    i = 0;
    
    while (str[i] != '\0')
    {
    	if (!(str[i] >= 'a' && str[i] <= 'z'))
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
    char	t3[] = "SuperTest";
	char	t4[] = "";

	printf("Only letters (expecting 1): %d\n", ft_str_is_lowercase(t1));
	printf("Has numbers (expecting 0): %d\n", ft_str_is_lowercase(t2));
	printf("Has uppercase (expecting 0): %d\n", ft_str_is_lowercase(t3));
    printf("Empty (expecting 1): %d\n", ft_str_is_lowercase(t4));
	return (0);
}
*/
}
