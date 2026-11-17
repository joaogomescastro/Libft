/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocast <joaocast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 09:42:27 by joaocast          #+#    #+#             */
/*   Updated: 2026/11/07 17:35:17 by joaocast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	s = src;
	d = dest;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char	src[] = "Hello 42";
	char	a[20];
	char	b[20];
	int		nums[3] = {1, 2, 3};
	int		copy[3];

	memset(a, 'x', 20);
	memset(b, 'x', 20);
	ft_memcpy(a, src, 9);
	memcpy(b, src, 9);
	printf("%s | %s | same: %d\n", a, b, memcmp(a, b, 20) == 0);
	ft_memcpy(copy, nums, sizeof(nums));
	printf("%d %d %d\n", copy[0], copy[1], copy[2]);
	printf("n = 0: %d\n", ft_memcpy(a, "zzz", 0) == a);
}*/
