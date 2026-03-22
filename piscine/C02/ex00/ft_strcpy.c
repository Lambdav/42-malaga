// #include <stdio.h>

char    *ft_strcpy(char *dest, char *src)
{
	int    i;
	
	i = 0;
	
	while (src[i] != '\0')
	{
	    dest[i] = src[i];
	    i++;
	}
	dest[i] = src[i];
	return (dest);
}

/*
int main(void)
{
	char	dest[10] = "Dest";
	char	src[10] = "Source";

	printf("dest before: %s\n", dest);
	ft_strcpy(dest, src);
	printf("dest after: %s\n", dest);
} */
