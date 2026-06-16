/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malves-a <malves-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 10:26:50 by malves-a          #+#    #+#             */
/*   Updated: 2026/06/08 14:13:41 by malves-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	t;

	t = nmemb * size;
	if (size != 0 && t / size != nmemb)
		return (NULL);
	ptr = malloc(t);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, t);
	return (ptr);
}
