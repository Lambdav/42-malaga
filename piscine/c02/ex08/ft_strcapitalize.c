// #include <stdio.h>

char ft_str_is_uppercase(char str)
{
	if (str >= 'A' && str <= 'Z')
    {
    	return (1);
    }
    return (0);
}

char ft_str_is_alpha(char str)
{
	if ((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z'))
    {
    	return (1);
    }
    return (0);
}

char ft_str_is_numeric(char str)
{
	if (str >= '0' && str <= '9')
    {
    	return (1);
    }
    return (0);
}

char *ft_strcapitalize(char *str)
{
	int	i;
    
    i = 0;
    while (str[i] != '\0')
    {
    	if (ft_str_is_uppercase(str[i]))
        {
        	str[i] += 32;
        }
    i++;
    }
	i = 0;
    while (str[i] != '\0')
    {
    	if (ft_str_is_alpha(str[i]))
        {
        	if (i == 0 || !(ft_str_is_alpha(str[i - 1]) || ft_str_is_numeric(str[i - 1])))
            str[i] -=32;
        }
       i++;
    }
   return (str);
}

/*
int	main(void)
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("Before: %s\n", str);
	ft_strcapitalize(str);
	printf("After: %s\n", str);
	return (0);
}
*/
