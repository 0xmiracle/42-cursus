/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratwani <ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 19:41:39 by ratwani           #+#    #+#             */
/*   Updated: 2023/07/16 19:41:46 by ratwani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*curr;
	t_list	*new_head;
	t_list	*new_node;
	void	*new_content;

	new_head = NULL;
	curr = lst;
	while (curr != NULL)
	{
		new_content = f(curr->content);
		new_node = ft_lstnew(new_content);
		if (new_node == NULL)
		{
			del(new_content);
			ft_lstclear(&new_head, del);
		}
		ft_lstadd_back(&new_head, new_node);
		curr = curr->next;
	}
	return (new_head);
}
