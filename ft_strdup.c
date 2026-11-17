/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocast <joaocast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 09:36:10 by joaocast          #+#    #+#             */
/*   Updated: 2026/11/10 09:36:35 by joaocast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	int		i;
	int		l;

	l = ft_strlen(s);
	i = 0;
	dest = malloc (sizeof (char) * (l + 1));
	if (dest == NULL)
		return (NULL);
	while (i < l)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
