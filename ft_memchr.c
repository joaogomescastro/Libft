/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocast <joaocast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 08:55:20 by joaocast          #+#    #+#             */
/*   Updated: 2026/11/15 14:13:17 by joaocast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	*ft_memchr(const void *s, int c, size_t n);

// int	main(void)
// {
// 	char	str[] = "hello world";
// 	char	*r;

// 	r = ft_memchr(str, 'o', 11);
// 	printf("%s\n", r);
// 	r = ft_memchr(str, 'o', 4);
// 	printf("%p\n", (void *)r);
// 	return (0);
// }

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char		*word;
	size_t					i;

	i = 0;
	word = s;
	while (i < n)
	{
		if (word[i] == (unsigned char)c)
			return ((void *)&word[i]);
		i++;
	}
	return (0);
}
