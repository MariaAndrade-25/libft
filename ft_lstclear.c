/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malves-a <malves-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 17:47:34 by malves-a          #+#    #+#             */
/*   Updated: 2026/06/16 18:09:18 by malves-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*n;

	if (!lst || !del)
		return ;
	while (*lst)
	{	
		n = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = n;
	}
	*lst = NULL;
}
