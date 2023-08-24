/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                                '':''       */
/*   By: Jean Ruhlmann <@42.fr.Alsace>              |''/''|     ____:___      */
/*                                                      /    .'         .     */
/*   Created: 2023/08/11 21:13:40 by Jean Ruhlmann    |  ___/        0   |    */
/*   Updated: 2023/08/21 01:27:59 by jruhlman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ischarset(char c, char charset)
{
	if (c == charset || c == '\0')
		return (1);
	return (0);
}

static int	ft_count(char *str, char charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (str[0] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (ft_ischarset(str[i + 1], charset)
			&& (!ft_ischarset(str[i], charset)))
			count++;
		i++;
	}
	return (count);
}

static int	ft_indice(char *str, char charset, char **tab)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (ft_ischarset(str[i], charset))
		{
			str[i] = '\0';
			if (str[j] != '\0')
			{
				tab[k++] = ft_strdup(&str[j]);
			}
			j = i + 1;
		}
		i++;
	}
	if (str[j] != '\0')
	{
		tab[k++] = ft_strdup(&str[j]);
	}
	return (k);
}

char	**ft_split(char *str, char charset)
{
	char	**tab;
	char	*dest;
	int		k;

	tab = malloc(sizeof(char *) * (ft_count(str, charset) + 1));
	if (!tab)
		return (NULL);
	dest = ft_strdup(str);
	k = ft_indice(dest, charset, tab);
	tab[k] = NULL;
	return (tab);
}
