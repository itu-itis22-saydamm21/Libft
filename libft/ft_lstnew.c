/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaydam <msaydam@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 11:11:33 by msaydam           #+#    #+#             */
/*   Updated: 2022/07/02 11:21:17 by msaydam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*str;

	str = malloc(sizeof(t_list));
	if (!str)
		return (NULL);
	str->content = content;
	str->next = NULL;
	return (str);
}
/* 
int main()
{
	t_list	*list;
	t_list	*list2;
	char	tab[8] = "mustafa";
	char	tab2[7] = "saydam";
	list = ft_lstnew(tab);
	list2 = ft_lstnew(tab2);
	list->next = list2;
	printf("%s\n", list->content);
	printf("%p\n", list->next);
	printf("%s\n", list2->content);
	printf("%p\n", list2->next);
}
 */