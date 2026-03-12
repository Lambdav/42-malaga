/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davbenit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 18:38:21 by davbenit          #+#    #+#             */
/*   Updated: 2026/03/12 18:42:25 by davbenit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

void	ft_div_mod(int a, int b, int *div, int *mod);

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
