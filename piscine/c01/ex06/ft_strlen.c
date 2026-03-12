/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davbenit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 18:47:25 by davbenit          #+#    #+#             */
/*   Updated: 2026/03/12 19:09:55 by davbenit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

/*
int	main(void)
{
	char	*s;
	int		len;

	s = "Hello World";
	len = ft_strlen(s);
	printf("String: '%s' -> Lenght: %d\n", s, len);
	return (0);
}
*/
