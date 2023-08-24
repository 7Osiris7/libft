/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                                '':''       */
/*   By: Jean Ruhlmann <@42.fr.Alsace>              |''/''|     ____:___      */
/*                                                      /    .'         .     */
/*   Created: 2023/08/11 21:34:08 by Jean Ruhlmann    |  ___/        0   |    */
/*   Updated: 2023/08/13 23:39:24 by jruhlman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	length;

	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
