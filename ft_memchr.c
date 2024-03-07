/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-der <fvon-der@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 07:46:09 by fvon-der          #+#    #+#             */
/*   Updated: 2024/03/07 15:34:15 by fvon-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//The memchr() function locates the first occurrence of c
//converted to an unsigned char)
//in string s.
//returns a pointer to the byte located,
//or NULL if no such byte exists within n bytes.
void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	unsigned char		chr;
	size_t				i;

	p = s;
	chr = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*p == chr)
		{
			return ((void *)p);
		}
		p++;
		i++;
	}
	return (NULL);
}
