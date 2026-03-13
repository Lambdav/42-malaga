// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
    
    i = 0;
    
    while (str[i] != '\0')
    {
    	if (!(str[i] >= 'A' && str[i] <= 'Z'))
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
	char	t1[] = "SUPERTEST";
	char	t2[] = "TEST123";
  char	t3[] = "SuperTest";
	char	t4[] = "";

	printf("Only uppercase (expecting 1): %d\n", ft_str_is_uppercase(t1));
	printf("Has numbers (expecting 0): %d\n", ft_str_is_uppercase(t2));
	printf("Has lowercase (expecting 0): %d\n", ft_str_is_uppercase(t3));
  printf("Empty (expecting 1): %d\n", ft_str_is_uppercase(t4));
	return (0);
}
*/
