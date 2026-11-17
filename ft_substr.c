/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocast <joaocast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 09:32:26 by joaocast          #+#    #+#             */
/*   Updated: 2026/11/10 14:37:52 by joaocast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;
	size_t	ls;

	i = 0;
	ls = ft_strlen(s);
	if (ls <= start)
		return (ft_strdup(""));
	if (len > ls - start)
		len = ls - start;
	str = malloc(sizeof(char) * (len + 1));
	if (!str || !s)
		return (NULL);
	while (s[start + i] && i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
