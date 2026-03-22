// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_len;

	dest_len = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char dest1[50] = "Hello";
	char *src1 = " World";
	printf("Case 1 - Before: [%s]\n", dest1);
	ft_strcat(dest1, src1);
	printf("Cas2 1 - After: [%s]\n", dest1);

	char dest2[50] = "";
	char *src2 = "I love 42";
	printf("Case 1 - Before: [%s]\n", dest2);
	ft_strcat(dest2, src2);
	printf("Cas2 1 - After: [%s]\n", dest2);

	char dest3[50] = "Yippeeeeeee!";
	char *src3 = "";
	printf("Case 1 - Before: [%s]\n", dest3);
	ft_strcat(dest3, src3);
	printf("Cas2 1 - After: [%s]\n", dest3);
    
	return (0);
}
*/
