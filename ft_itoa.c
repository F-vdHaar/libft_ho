/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-der <fvon-der@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:29:32 by fvon-der          #+#    #+#             */
/*   Updated: 2024/03/24 06:32:36 by fvon-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// converting a number to a string.

// -- saving n as long so if n = INT_MIN and INT_MAX it does not mess me up
// with overflow

static size_t	get_digit_count(long n_aslong);

char	*ft_itoa(int n)
{
	long	n_aslong;
	size_t	size;
	char	*result;

	n_aslong = (long)n;
	size = get_digit_count(n_aslong);
	result = (char *)calloc(sizeof(char), size + 1);
	if (!result)
		return (NULL);
	result[size + 1] = '\0';
	if (n_aslong < 0)
	{
		n_aslong *= (-1);
		result[0] = '-';
	}
	else if (n_aslong == 0)
		result[0] = '0';
	while (n_aslong != 0)
	{
		size--;
		result[size] = ((n_aslong % 10) + '0');
		n_aslong = n_aslong / 10;
	}
	return (result);
}

static size_t	get_digit_count(long n_aslong)
{
	size_t	size;

	size = 1;
	if (n_aslong < 0)
	{
		size++;
		n_aslong *= (-1);
	}
	while (n_aslong)
	{
		n_aslong /= 10;
		size++;
	}
	return (size);
}
