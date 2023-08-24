/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                                '':''       */
/*   By: Jean Ruhlmann <@42.fr.Alsace>              |''/''|     ____:___      */
/*                                                      /    .'         .     */
/*   Created: 2023/08/11 03:46:18 by Jean Ruhlmann    |  ___/        0   |    */
/*   Updated: 2023/08/13 22:30:09 by jruhlman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	size_t		i;
	const char	*s;

	d = (char *)dest;
	i = 0;
	s = (const char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
