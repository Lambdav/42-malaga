/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davbenit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 18:57:45 by davbenit          #+#    #+#             */
/*   Updated: 2026/03/12 19:07:49 by davbenit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = 0;
	while (j <= size)
	{
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		j++;
		i = 0;
	}
}

/*
int	main(void)
{
	int	array[] = {6, 5, 7, 4, 8};
	int	size;
	int	k;

	size = 5;
	k = 0;
	printf("Before: ");
	while (k < size)
	{
		printf("%d ", array[k]);
		k++;
	}
	printf("\n");
	k = 0;
	printf("After: ");
	ft_sort_int_tab(array, size);
	while (k < size)
	{
		printf("%d ", array[k]);
		k++;
	}
	printf("\n");
	return (0);
}
*/
