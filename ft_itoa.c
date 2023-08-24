/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruhlman <marvin42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 01:22:10 by jruhlman          #+#    #+#             */
/*   Updated: 2023/08/17 00:46:03 by jruhlman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_digit(int n)
{
	size_t	i;

	i = 1;
	while (n != '\0')
	{
		n /= 10;
		if (n != 0)
			i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*str_n;
	size_t			digit;
	long int		num;

	num = n;
	digit = ft_digit(n);
	if (n < 0)
	{
		num *= -1;
		digit++;
	}
	str_n = (char *)malloc(sizeof(char) * (digit + 1));
	if (!str_n)
		return (NULL);
	str_n[digit] = '\0';
	while (digit--)
	{
		str_n[digit] = num % 10 + '0';
		num = num / 10;
	}
	if (n < 0)
		str_n[0] = '-';
	return (str_n);
}
