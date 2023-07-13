/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaro-l <gamaro-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 11:11:56 by gamaro-l          #+#    #+#             */
/*   Updated: 2021/11/18 00:55:06 by gamaro-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	unsigned int	w;
	unsigned int	mc;
	unsigned int	res;

	w = 0;
	mc = 1;
	res = 0;
	while (str[w] == '\t' || str[w] == '\n' || str[w] == '\v' || str[w] == '\f'
		|| str[w] == '\r' || str[w] == ' ')
		w++;
	if (str[w] == '-')
	{
		mc *= -1;
		w++;
	}
	else if (str[w] == '+')
		w++;
	while (str[w] >= '0' && str[w] <= '9')
	{
		res = (res * 10) + (str[w] - '0');
		w++;
	}
	return (res * mc);
}
