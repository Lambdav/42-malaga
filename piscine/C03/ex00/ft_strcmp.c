// #include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
int main(void)
{
	char a[] = "ABCDD";
    char b[] = "ABCDD";
    int	cmp;
    
    cmp = ft_strcmp(a, b);
    if (cmp > 0)
    printf("%s is greater than %s\n", a, b);
    else if(cmp < 0)
    printf("%s is greater than %s\n", b, a);
    else
    printf("%s and %s are equal\n", a, b);
}
*/
