/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocast <joaocast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 10:01:46 by joaocast          #+#    #+#             */
/*   Updated: 2026/11/07 17:22:02 by joaocast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

/*void	test(const char *s, int c)
{
	char	*mine;
	char	*real;

	mine = ft_strrchr(s, c);
	real = strrchr(s, c);
	printf("strrchr(\"%s\", '%c'): ", s, c ? c : '0');
	if (mine == real)
		printf("OK");
	else
		printf("ERRO");
	printf("  (meu: %s | original: %s)\n",
		mine ? mine : "NULL", real ? real : "NULL");
}

int	main(void)
{
	test("hello world", 'o');
	test("hello world", 'h');
	test("hello world", 'd');
	test("hello world", 'z');
	test("hello world", '\0');
	test("", 'a');
	test("", '\0');
	test("aaa", 'a');
	return (0);
}
*/