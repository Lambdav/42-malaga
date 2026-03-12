void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a = 13;
	int	b = 3;
	int	res_div;
	int	res_mod;

	ft_div_mod(a, b, &res_div, &res_mod);
	printf("a: 13, b: 3 -> div: %d, mod: %d\n", res_div, res_mod);
	return (0);
}
*/
