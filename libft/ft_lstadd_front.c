/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaydam <msaydam@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 13:45:49 by msaydam           #+#    #+#             */
/*   Updated: 2022/07/02 13:49:51 by msaydam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!lst)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}
/*
int	main(void)
{
	t_list *lst = ft_lstnew("bir");
	t_list *lst2 = ft_lstnew("iki");
	t_list *new = ft_lstnew("üc");
	lst->next = lst2;
	printf("%p\n", lst);
	printf("%p\n", lst->next);
	printf("%p\n\n", new);
	ft_lstadd_front(&lst, new);
	printf("%p\n", new);
	printf("%p\n", new->next);
	printf("%p\n", new->next->next);
} */