/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaydam <msaydam@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 14:13:59 by msaydam           #+#    #+#             */
/*   Updated: 2022/07/02 14:27:02 by msaydam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!del)
		return ;
	while (*lst != NULL)
	{
		del((*lst)->content);
		tmp = *lst;
		*lst = tmp->next;
		free(tmp);
	}
}
/*
void	del(void *content)
{
	free(content);
}
int	main(void)
{
	t_list	*lst;
	t_list	*lst2;
	t_list	*lst3;
	lst = ft_lstnew(ft_strdup("yakup"));
	lst2 = ft_lstnew(ft_strdup("ali"));
	lst3 = ft_lstnew(ft_strdup("mehmet"));
	lst->next = lst2;
	lst2->next = lst3;
	printf("%s\n", lst->content);
	printf("%s\n", lst2->content);
	printf("%s\n", lst3->content);
	ft_lstclear(&lst, del);
}
 */
