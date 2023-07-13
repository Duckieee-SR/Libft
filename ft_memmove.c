/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_memmove.c									   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: gamaro-l <gamaro-l@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2021/11/07 18:25:44 by gamaro-l		  #+#	#+#			 */
/*   Updated: 2021/11/07 18:25:44 by gamaro-l		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	unsigned char	*tmp_dest;
	unsigned char	*tmp_src;

	if (dest == src || size == 0)
		return (dest);
	if (dest < src)
	{
		tmp_dest = (unsigned char *) dest;
		tmp_src = (unsigned char *) src;
		while (size--)
			*tmp_dest++ = *tmp_src++;
	}
	else
	{
		tmp_dest = (unsigned char *) dest + (size - 1);
		tmp_src = (unsigned char *) src + (size - 1);
		while (size--)
			*tmp_dest-- = *tmp_src--;
	}
	return (dest);
}
