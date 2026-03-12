void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}

/*
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5};
	int	size = 5;
	int	i;

	i = 0;
	printf("Original: ");
	while (i < size)
		printf("%d ", tab[i++]);
	printf("\n");

	ft_rev_int_tab(tab, size);

	i = 0;
	printf("Invertido: ");
	while (i < size)
		printf("%d ", tab[i++]);
	printf("\n");
	return (0);
}
*/
