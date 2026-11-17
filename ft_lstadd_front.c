/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocast <joaocast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 11:50:37 by joaocast          #+#    #+#             */
/*   Updated: 2026/11/15 14:14:00 by joaocast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*int	main(void)
{
	t_list	*head;

	head = NULL;
	ft_lstadd_front(&head, ft_lstnew("A"));
	ft_lstadd_front(&head, ft_lstnew("B"));
	printf("%s\n", (char *)head->content);
	printf("%s\n", (char *)head->next->content);
	return (0);
}*/
