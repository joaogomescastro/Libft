/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocast <joaocast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 12:05:37 by joaocast          #+#    #+#             */
/*   Updated: 2026/11/07 17:36:45 by joaocast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	if (size == 0)
		return (len);
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}

// void	test(const char *src, size_t size)
// {
// 	char	buf[10];
// 	size_t	ret;

// 	memset(buf, 'x', 9);
// 	buf[9] = '\0';
// 	ret = ft_strlcpy(buf, src, size);
// 	printf("src=\"%s\" size=%zu -> dst=\"%s\" ret=%zu\n", src, size, buf, ret);
// }

// int	main(void)
// {
// 	test("hello", 10);
// 	test("hello", 6);
// 	test("hello", 4);
// 	test("hello", 1);
// 	test("hello", 0);
// 	test("", 5);
// 	test("abcdefghijkl", 10);
// 	return (0);
// }
