/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malves-a <malves-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 09:45:03 by malves-a          #+#    #+#             */
/*   Updated: 2026/05/29 15:01:06 by malves-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	v;
	size_t			i;

	p = (unsigned char *)s;
	v = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		p[i] = v;
		i++;
	}
	return (s);
}
