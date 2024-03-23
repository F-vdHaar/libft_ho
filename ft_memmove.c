/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-der <fvon-der@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 07:46:31 by fvon-der          #+#    #+#             */
/*   Updated: 2024/03/23 05:12:53 by fvon-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Copies n characters from str2 to str1.
 If str1 and str2 overlap the information is first completely read from str1 
 and then written to str2 so that the characters are copied correctly.
Returns the argument str1.
Do not use malloc?
*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*temp_dst;
	const char	*temp_src;

	temp_dst = (char *)dst;
	temp_src = (const char *)src;
	if (len == 0 || temp_src == temp_dst)
		return (dst);
	if (temp_src <= temp_dst && temp_dst <= temp_src + len)
	{
		while (len > 0)
		{
			temp_dst[len - 1] = temp_src[len - 1];
			len--;
		}
	}
	else
		memcpy(temp_dst, src, len);
	return (dst);
}
