/*
#include <stdio.h>
*/

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
int	main(void)
{
	int	v1;
	int	v2;

	v1 = 10;
	v2 = 20;
	printf("Before: v1 = %d, v2 = %d\n", v1, v2);
	ft_swap(&v1, &v2);
	printf("After: v1 = %d, v2 = %d\n", v1, v2);
	return (0);
}
*/
