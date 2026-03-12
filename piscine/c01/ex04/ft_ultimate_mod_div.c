void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	v1 = 13;
	int	v2 = 3;

	printf("Antes: a = %d, b = %d\n", v1, v2);
	ft_ultimate_div_mod(&v1, &v2);
	printf("Despues: a (div) = %d, b (mod) = %d\n", v1, v2);
	return (0);
}
*/
