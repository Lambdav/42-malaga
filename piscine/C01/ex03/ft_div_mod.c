/*
#include <stdio.h>
*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main(void)
{
	int	a;
	int	b;
	int	res_div;
	int	res_mod;

	a = 13;
	b = 3;
	ft_div_mod(a, b, &res_div, &res_mod);
	printf("a: 13, b: 3 -> div: %d, mod: %d", res_div, res_mod);
	return (0);
}
*/
