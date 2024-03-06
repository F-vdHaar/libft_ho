/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-der <fvon-der@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 22:49:19 by fvon-der          #+#    #+#             */
/*   Updated: 2024/03/06 23:21:36 by fvon-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include <strings.h>

void	*ft_calloc(size_t num_elements, size_t element_size)
{
	size_t	t_size;
	void	*memptr;

	t_size = num_elements * element_size;
	memptr = malloc(t_size);
	if (memptr != NULL)
	{
		bzero(memptr, t_size);
		return (memptr);
	}
	return (NULL);
}
