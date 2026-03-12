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
	int	v1 = 10;
	int	v2 = 20;

	printf("Antes: v1 = %d, v2 = %d\n", v1, v2);
	ft_swap(&v1, &v2);
	printf("Despues: v1 = %d, v2 = %d\n", v1, v2);
	return (0);
}
*/
