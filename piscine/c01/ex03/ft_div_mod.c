void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);
void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int a = 13;
	int b = 3;
	int div, mod;

	// Prueba 03
	ft_div_mod(a, b, &div, &mod);
	printf("Ex03: Div=%d, Mod=%d\n", div, mod);

	// Prueba 04
	int x = 13;
	int y = 3;
	ft_ultimate_div_mod(&x, &y);
	printf("Ex04: x (div)=%d, y (mod)=%d\n", x, y);
	return (0);
}
*/
