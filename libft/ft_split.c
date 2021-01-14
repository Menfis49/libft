/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vazra <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 12:59:50 by vazra             #+#    #+#             */
/*   Updated: 2021/01/04 13:01:17 by vazra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char			**arr_free(char **ptr, unsigned int k)
{
	unsigned int	i;

	i = 0;
	while (i < k)
	{
		if (ptr[i])
			free(ptr[i]);
		i++;
	}
	free(ptr);
	return (NULL);
}

static unsigned int	cnt_w(char *s, char c)
{
	unsigned int	count;
	unsigned int	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char			**prereq(char const *s, char c)
{
	char			**ptr;

	if (!s)
		return (NULL);
	if (!(ptr = (char **)malloc((cnt_w((char *)s, c) + 1) * sizeof(*ptr))))
		return (NULL);
	return (ptr);
}

char				**ft_split(char const *s, char c)
{
	char			**ptr;
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	if (!(ptr = prereq(s, c)))
		return (NULL);
	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (s[j])
			if (!(ptr[k] = ft_substr((char *)s, j, i - j)))
				return (arr_free(ptr, k));
		if (s[j])
			k++;
	}
	ptr[k] = NULL;
	return (ptr);
}
