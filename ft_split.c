/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malves-a <malves-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 10:06:28 by malves-a          #+#    #+#             */
/*   Updated: 2026/06/15 15:46:47 by malves-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int			count;
	char const	*start;

	count = 0;
	start = s;
	while (*s)
	{
		if (*s != c && (*(s - 1) == c || s == start))
			count++;
		s++;
	}
	return (count);
}

static char	**alloc_result(char const *s, char c)

{
	int		i;
	char	**result;

	if (!s)
		return (NULL);
	i = count_words(s, c);
	result = (char **)(malloc(sizeof(char *) * (i + 1)));
	if (!result)
		return (NULL);
	result[i] = NULL;
	return (result);
}

static void	free_result(char **result, int i)
{
	while (i > 0)
		free(result[--i]);
	free(result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		len;

	result = alloc_result (s, c);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (s[len] && s[len] != c)
				len++;
			result[i++] = ft_substr(s, 0, len);
			if (!result[i - 1])
			{
				free_result(result, i - 1);
				return (NULL);
			}
			s += len;
		}
		else
			s++;
	}
	return (result);
}
