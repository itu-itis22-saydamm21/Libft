/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaydam <msaydam@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 13:53:38 by msaydam           #+#    #+#             */
/*   Updated: 2022/07/02 13:56:14 by msaydam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
int	main()
{
	t_list	*lst;
	t_list	*lst2;
	t_list	*lst3;
	lst = ft_lstnew("Ali");
	lst2 = ft_lstnew("Ata");
	lst3 = ft_lstnew("Bindi");
	lst->next = lst2;
	lst->next->next = lst3;
	printf("%s", ft_lstlast(lst)->content);
}
*/
