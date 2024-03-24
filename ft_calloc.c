/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-der <fvon-der@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 22:49:19 by fvon-der          #+#    #+#             */
/*   Updated: 2024/03/23 17:05:06 by fvon-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// malloc but  all the memory bytes are set to 0
//any arithm operation resulting in value greater than SIZE_MAX will overflow.

void	*ft_calloc(size_t num_elements, size_t element_size)
{
	size_t	t_size;
	void	*memptr;

	if (num_elements == 0 || element_size == 0)
		return (malloc(0));
	if (element_size > INT_MAX / num_elements
		|| num_elements > INT_MAX / element_size)
		return (NULL);
	t_size = num_elements * element_size;
	memptr = malloc(t_size);
	if (memptr != NULL)
	{
		ft_bzero(memptr, t_size);
	}
	return (memptr);
}
