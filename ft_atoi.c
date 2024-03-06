/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-der <fvon-der@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:58:20 by fvon-der          #+#    #+#             */
/*   Updated: 2024/03/06 22:24:46 by fvon-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

int	ft_isspace(char c);
int	ft_atoi(char *str);

int	ft_atoi(char *str)
{
	int	sign;
	int	result;
	int	i;

	sign = 1;
	i = 0;
	result = 0;
	while (str[i] != '\0')
	{
		while (ft_isspace(str[i]))
			i++;
		while (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				sign *= -1;
			i++;
			break ;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			result = (result * 10) + (str[i] - '0');
			i++;
		}
		break ;
	}
	return (result * sign);
}

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n'
		|| c == '\v' || c == '\r' || c == '\f')
		return (1);
	return (0);
}
