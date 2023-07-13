/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_strim.c										 :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: gamaro-l <gamaro-l@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2021/11/09 16:38:29 by gamaro-l		  #+#	#+#			 */
/*   Updated: 2021/11/17 18:46:12 by gamaro-l		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	f;
	int	i;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	f = ft_strlen(s1) - 1;
	while (f && ft_strchr(set, s1[f]))
		f--;
	return (ft_substr(s1, i, f - i + 1));
}
