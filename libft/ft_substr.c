/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vazra <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 12:38:39 by vazra             #+#    #+#             */
/*   Updated: 2021/01/04 12:51:20 by vazra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*result;
	unsigned int	i;
	size_t			size_s;

	i = 0;
	if (!s)
		return (0);
	size_s = ft_strlen(s);
	if (start >= size_s)
		return (ft_strdup("\0"));
	if (!(result = malloc(sizeof(*result) * (len + 1))))
		return (0);
	while (i < len)
	{
		result[i] = s[start];
		i++;
		start++;
	}
	result[i] = '\0';
	return (result);
}
