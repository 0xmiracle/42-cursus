/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratwani <ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 19:41:39 by ratwani           #+#    #+#             */
/*   Updated: 2023/07/15 16:07:49 by ratwani          ###   ########.fr       */
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

// void	*f(void *content)
// {
// 	int	*c;

// 	if (content == NULL)
// 		return (NULL);
// 	c = (int *)content;
// 	*c = *c + 1;
// 	return (c);
// }

// // void	del(void *data)
// // {
// // 	free(data);
// // }

// int	main(void)
// {
// 	t_list *node1;
// 	t_list *node2;
// 	t_list *node3;
// 	t_list *current;
// 	t_list *func;
// 	t_list *result;

// 	int i, j, k;
// 	i = 1;
// 	j = 2;
// 	k = 3;
// 	node1 = ft_lstnew(&i);
// 	node2 = ft_lstnew(&j);
// 	node3 = ft_lstnew(&k);
// 	current = node1;
// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = NULL;
// 	while (current != NULL)
// 	{
// 		printf("Before: %d\t", *(int *)current->content);
// 		current = current->next;
// 	}
// 	result = ft_lstmap(node1, f, free);
// 	current = result;
// 	while (current != NULL)
// 	{
// 		printf("After: %d\t", *(int *)current->content);
// 		current = current->next;
// 	}
// }