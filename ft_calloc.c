/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruhlman <marvin42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 00:53:53 by jruhlman          #+#    #+#             */
/*   Updated: 2023/08/14 01:07:40 by jruhlman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	size_t	i;
	char	*allocated;

	total_size = nmemb * size;
	if (nmemb && size && total_size / nmemb != size)
		return (NULL);
	allocated = (char *)malloc(total_size);
	if (!allocated)
		return (NULL);
	i = 0;
	while (i < total_size)
		allocated[i++] = 0;
	return (allocated);
}
