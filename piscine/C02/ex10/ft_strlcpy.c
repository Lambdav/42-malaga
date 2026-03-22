// #include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
    unsigned int	count;
    
    i = 0;
    count = 0;
    while (src[count])
    {
    	count++;
    }
    if (size > 0)
    {
    	while (i <= count && i < size - 1)
    	{
    		dest[i] = src[i];
        	i++;
    	}
    }
    dest[i] = '\0';
    return (count);
}

/*
int	main(void)
{
	char	src[] = "letters";
	char	dest[11];
	int	n = 6;

	printf("src: %s\nlenght returned: %d\ndest: %s\n", src, ft_strlcpy(dest, src, n), dest);
}
*/
