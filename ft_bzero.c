/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocast <joaocast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 11:03:16 by joaocast          #+#    #+#             */
/*   Updated: 2026/11/07 17:37:49 by joaocast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_bzero(void *s, size_t n);

// int	main(void)
// {
// 	char	a[8] = "abcdefg";
// 	char	b[8] = "abcdefg";
// 	int		x[3] = {1, 2, 3};
// 	int		i;

// 	ft_bzero(a + 2, 3);
// 	bzero(b + 2, 3);
// 	i = 0;
// 	while (i < 8)
// 		printf("%d ", a[i++]);
// 	printf("| %s\n", memcmp(a, b, 8) == 0 ? "OK" : "ERRO");
// 	ft_bzero(x, 0);
// 	printf("%d %d %d\n", x[0], x[1], x[2]);
// 	ft_bzero(x, sizeof(x));
// 	printf("%d %d %d\n", x[0], x[1], x[2]);
// 	return (0);
// }

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}
