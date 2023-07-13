/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaro-l <gamaro-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 19:03:05 by gamaro-l          #+#    #+#             */
/*   Updated: 2021/11/17 18:56:31 by gamaro-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*fstr;
	unsigned char	*ostr;

	ostr = (unsigned char *)s2;
	fstr = (unsigned char *)s1;
	i = 0;
	while (i <= n)
	{
		if (i == n)
			return (0);
		else if (fstr[i] != ostr[i])
			return (fstr[i] - ostr[i]);
		i++;
	}
	return (0);
}
