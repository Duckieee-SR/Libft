/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaro-l <gamaro-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 18:20:52 by gamaro-l          #+#    #+#             */
/*   Updated: 2021/11/17 18:21:06 by gamaro-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*lst_next;

	if (lst == NULL || del == NULL)
		return ;
	lst_next = *lst;
	while (lst_next)
	{
		temp = lst_next->next;
		del(lst_next->content);
		free(lst_next);
		lst_next = temp;
	}
	*lst = NULL;
}
