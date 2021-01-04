/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vazra <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 12:36:33 by vazra             #+#    #+#             */
/*   Updated: 2021/01/04 12:51:42 by vazra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*result;
	size_t		size_s1;
	size_t		size_s2;

	if (!(s1) && !(s2))
		return (0);
	else if (!(s1) || !(s2))
		return (!(s1) ? ft_strdup(s2) : ft_strdup(s1));
	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	if (!(result = malloc(sizeof(*result) * (size_s1 + size_s2 + 1))))
		return (0);
	ft_strlcpy(result, s1, size_s1 + 1);
	ft_strlcat(result + size_s1, s2, size_s2 + 1);
	return (result);
}
