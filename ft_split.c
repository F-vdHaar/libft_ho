/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-der <fvon-der@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:47:22 by fvon-der          #+#    #+#             */
/*   Updated: 2024/03/24 07:18:07 by fvon-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//static char	*remove_sep(const char	*str, char c);
//static int	count_words(const char	*str, char c);
	/*size_t		word_count;
	char	*word;

	word_count = 0;
	
	
	spl_str = (char **)ft_calloc(word_count, sizeof(char *));
	while (word_count)
	{	word = locate_next_word
		spl_str[word_count] = 
		word_count--;
	}
		
	rec_word_search(s, c, &word_count);
	spl_str = (char **)ft_calloc(word_count, sizeof(char *));
	

	locate_words(s, c, &word_count);
	char	**spl_str;
	int		spl_start;
	int		str_count;
	int		i;

	i = 0;
	str_count = 0;
	spl_start = 0;
	spl_str = (char **)ft_calloc(ft_strlen(s) / 2 + 1, sizeof(char *));
	if (!spl_str)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
			i++;
		else
		{
			spl_str[str_count++] = remove_sep(s + spl_start, c);
			spl_start = ++i;
		}
	}
	if (spl_start < i)
		spl_str[str_count++] = remove_sep(s + spl_start, c);
	spl_str[str_count] = NULL;
	return (spl_str);
	
}



static char	*remove_sep(const char	*str, char c)
{
	char	*clean_str;
	int		i_str;
	int		j_cleanstr;

	i_str = 0;
	j_cleanstr = 0;
	clean_str = (char *)malloc(strlen(str) + 1);
	if (!clean_str)
		return (NULL);
	while (str[i_str])
	{
		if (str[i_str] != c)
		{
			clean_str[j_cleanstr] = str[i_str];
			j_cleanstr++;
		}
		i_str++;
	}
	clean_str[j_cleanstr] = '\0';
	return (clean_str);
}

char	*rec_word_search(char *str, char separator, int	*word_count)
{
	int	i;
	int	start;
	int	end;

	i = 0;
	start = 0;
	while (str[i])
	{
		
	}
	
}
*/

char	**ft_split(const char *s, char c)
{
	char	arr[2];
	char	*sep_set;

	arr[0] = c;
	arr[1] = ' ';
	sep_set = arr;
	s = ft_strtrim(s, sep_set);
	return (NULL);
}
