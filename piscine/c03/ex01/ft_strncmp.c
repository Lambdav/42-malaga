// #include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n - 1)
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
int main(void)
{
	char a[] = "ABCDE";
    char b[] = "ABCDD";
    unsigned int	size;
    int	cmp;
    
    size = 4;
    cmp = ft_strncmp(a, b, size);
    if (cmp > 0)
    printf("%s is greater than %s\n", a, b);
    else if(cmp < 0)
    printf("%s is greater than %s\n", b, a);
    else
    printf("%s and %s are equal\n", a, b);
}
*/
