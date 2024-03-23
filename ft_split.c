/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-der <fvon-der@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:47:22 by fvon-der          #+#    #+#             */
/*   Updated: 2024/03/22 16:19:46 by fvon-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(const char *s, char c)
{
	char	**spl_str;
	int		spl_start;
	int		str_count;
	int		i;

	i = 0;
	str_count = 0;
	spl_start = 0;
	spl_str = (char **)calloc(ft_strlen(s) / 2 + 1, sizeof(char *));
	if (!spl_str)
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
		{
			spl_str[str_count] = ft_substr(s, spl_start, i - spl_start);
			str_count++;
			spl_start = i + 1;
		}
		i++;
	}
	return (spl_str);
}
