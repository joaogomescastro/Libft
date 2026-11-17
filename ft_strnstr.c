/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocast <joaocast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 12:12:27 by joaocast          #+#    #+#             */
/*   Updated: 2026/11/08 15:47:06 by joaocast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	len = 0;
	while (small[len])
		len++;
	if (len == 0)
		return ((char *)big);
	while (big[i] && i < size)
	{
		j = 0;
		while (big[i + j] == small[j] && i + j < size)
		{
			j++;
			if (j == len)
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
// int	main(void)
// {
// 	char	*res;

// 	res = ft_strnstr("ZZZZZDEF", "ABC", 8);
// 	printf("%s\n", res);
// }
