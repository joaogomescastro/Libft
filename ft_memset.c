/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocast <joaocast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 09:56:42 by joaocast          #+#    #+#             */
/*   Updated: 2026/11/10 14:06:06 by joaocast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// int	main(void)
// {
// 	char	a[8] = "abcdefg";
// 	char	b[8] = "abcdefg";
// 	int		nums[3];
// 	int		ref[3];

// 	ft_memset(a + 2, '-', 3);
// 	memset(b + 2, '-', 3);
// 	printf("%s | %s | %s\n", a, b, strcmp(a, b) == 0 ? "OK" : "ERRO");
// 	ft_memset(nums, 0, sizeof(nums));
// 	printf("%d %d %d\n", nums[0], nums[1], nums[2]);
// 	ft_memset(nums, 1, sizeof(nums));
// 	memset(ref, 1, sizeof(ref));
// 	printf("%d | %s\n", nums[0],
// 		memcmp(nums, ref, sizeof(nums)) == 0 ? "OK" : "ERRO");
// 	printf("%d\n", ft_memset(a, 'z', 0) == a);
// 	return (0);
// }