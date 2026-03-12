/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_mod_div.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davbenit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 18:42:35 by davbenit          #+#    #+#             */
/*   Updated: 2026/03/12 19:09:11 by davbenit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

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
int	main(void)
{
	int	v1;
	int	v2;

	v1 = 13;
	v2 = 3;
	printf("Before: a = %d, b = %d\n", v1, v2);
	ft_ultimate_div_mod(&v1, &v2);
	printf("After: a (div) = %d, b (mod) = %d\n", v1, v2);
	return (0);
}
*/
