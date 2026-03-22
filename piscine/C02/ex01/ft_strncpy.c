// #include <stdio.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int    i;
	
	i = 0;
	
	while (src[i] != '\0' && i < n)
	{
	    dest[i] = src[i];
	    i++;
	}
	while (i < n)
	{
	    dest[i] = '\0';
	    i++;
	}
	return (dest);
}

/*
int main(void)
{
	char	dest[10] = "Destttttt";
	char	src[10] = "Source";
	int    t = 5;

	printf("dest before: %s\n", dest);
	ft_strncpy(dest, src, t);
	printf("dest after: %s\n", dest);
} */
