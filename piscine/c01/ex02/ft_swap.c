/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davbenit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 18:33:56 by davbenit          #+#    #+#             */
/*   Updated: 2026/03/12 19:08:43 by davbenit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
