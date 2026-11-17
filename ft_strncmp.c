/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocast <joaocast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 11:44:55 by joaocast          #+#    #+#             */
/*   Updated: 2026/11/10 15:03:03 by joaocast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	*idc = "blabla";
// 	char	*idk = "blahdb";

// 	printf("%d\n", ft_strncmp(idc, idk, 4));
// 	printf("%d\n", ft_strncmp(idc, idk, 3));
// 	printf("%d\n", ft_strncmp("abc", "abc", 10));
// 	return (0);
// }
