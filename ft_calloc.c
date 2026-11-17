/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocast <joaocast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 14:30:16 by joaocast          #+#    #+#             */
/*   Updated: 2026/11/10 13:27:16 by joaocast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*new;
	size_t			i;

	if (nmemb != 0 && (nmemb * size) / nmemb != size)
		return (NULL);
	new = malloc(nmemb * size);
	if (!new)
		return (NULL);
	i = 0;
	while (i < nmemb * size)
	{
		new[i] = 0;
		i++;
	}
	return (new);
}

// int	main(void)
// {
// 	int	*arr;
// 	int	i;

// 	arr = ft_calloc(5, sizeof(int));
// 	if (!arr)
// 		return (1);
// 	i = 0;
// 	while (i < 5)
// 	{
// 		printf("arr[%d] = %d\n", i, arr[i]);
// 		i++;
// 	}
// 	free(arr);
// 	return (0);
// }