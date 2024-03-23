/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-der <fvon-der@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:29:32 by fvon-der          #+#    #+#             */
/*   Updated: 2024/03/22 14:53:22 by fvon-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	long	n_aslong;
	size_t	size;
	char	*result;

	n_aslong = n;
	size = 0;
	while (n_aslong)
	{
		n_aslong /= 10;
		size++;
	}
	result = (char *)calloc(sizeof(char), size + 1);
	if (!result)
		return (0);
	while (n_aslong != 0)
	{
		result[size] = ((n_aslong % 10) + 48);
		n_aslong = n_aslong / 10;
		size--;
	}
	return (result);
}
