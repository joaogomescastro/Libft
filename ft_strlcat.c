/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocast <joaocast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 18:14:50 by joaocast          #+#    #+#             */
/*   Updated: 2026/11/07 17:36:51 by joaocast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	l;

	i = 0;
	j = 0;
	l = 0;
	while (i < size && dest[i])
		i++;
	while (src[j])
		j++;
	if (i == size)
		return (size + j);
	while (src[l] && i + l < size - 1)
	{
		dest[i + l] = src[l];
		l++;
	}
	dest[i + l] = '\0';
	return (i + j);
}
// int	main(void)
// {
// 	char	dest[10] = "ab";
// 	size_t	ret;

// 	ret = ft_strlcat(dest, "cdefgh", 6);
// 	printf("dest = %s\nret = %zu\n", dest, ret);
// 	return (0);
// }
