/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocast <joaocast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 10:36:16 by joaocast          #+#    #+#             */
/*   Updated: 2026/11/07 17:37:08 by joaocast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	s = src;
	d = dest;
	if (d < s)
	{
		while (n--)
			*d++ = *s++;
	}
	else
	{
		while (n--)
			d[n] = s[n];
	}
	return (dest);
}

// void	test(char *nome, int dst_off, int src_off, size_t n)
// {
// 	char	a[] = "abcdef";
// 	char	b[] = "abcdef";

// 	ft_memmove(a + dst_off, a + src_off, n);
// 	memmove(b + dst_off, b + src_off, n);
// 	printf("%-20s meu: %s | original: %s | %s\n", nome, a, b,
// 		strcmp(a, b) == 0 ? "OK" : "ERRO");
// }

// int	main(void)
// {
// 	int	nums[5] = {1, 2, 3, 4, 5};
// 	int	ref[5] = {1, 2, 3, 4, 5};

// 	test("direita (overlap)", 2, 0, 4);
// 	test("esquerda (overlap)", 0, 2, 4);
// 	test("sem overlap", 3, 0, 3);
// 	test("mesmo sitio", 0, 0, 6);
// 	test("n = 0", 2, 0, 0);
// 	test("1 byte", 1, 0, 1);
// 	ft_memmove(nums + 1, nums, 4 * sizeof(int));
// 	memmove(ref + 1, ref, 4 * sizeof(int));
// 	printf("%-20s meu: %d %d %d %d %d | %s\n", "ints (direita)",
// 		nums[0], nums[1], nums[2], nums[3], nums[4],
// 		memcmp(nums, ref, sizeof(nums)) == 0 ? "OK" : "ERRO");
// 	return (0);
// }
