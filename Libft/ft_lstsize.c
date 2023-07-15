/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratwani <ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 17:51:18 by ratwani           #+#    #+#             */
/*   Updated: 2023/07/13 16:47:10 by ratwani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*curr;
	int		i;

	curr = lst;
	i = 0;
	while (curr != NULL)
	{
		curr = curr->next;
		i++;
	}
	return (i);
}

// int main()
// {
//     t_list *Node1;
//     t_list *Node2;
//     t_list *Node3;
//     t_list *Node4;
//     // t_list *current;
//     Node1 = ft_lstnew("1");
//     Node2 = ft_lstnew("2");
//     Node3 = ft_lstnew("3");
//     Node4 = ft_lstnew("4");
//     Node1->next = Node2;
//     Node2->next = Node3;
//     Node3->next = Node4;
//     Node4->next = NULL;
//     // current = Node1;
//     printf("%d", ft_lstsize(Node1));
// }