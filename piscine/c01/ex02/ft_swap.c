void  ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a = 10;
	int	b = 20;

	printf("Antes: a=%d, b=%d\n", a, b);
	ft_swap(&a, &b);
	printf("Despues: a=%d, b=%d\n", a, b);
	return (0);
}
*/
