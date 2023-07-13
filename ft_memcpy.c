/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaro-l <gamaro-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 14:35:13 by gamaro-l          #+#    #+#             */
/*   Updated: 2021/10/27 14:35:13 by gamaro-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	int				i;

	i = 0;
	str1 = (unsigned char *)dest;
	str2 = (unsigned char *)src;
	if (n == 0 || dest == src)
		return (dest);
	while (n--)
	{
		str1[i] = str2[i];
		i++;
	}
	return (dest);
}
