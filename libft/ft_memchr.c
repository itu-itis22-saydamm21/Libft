/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaydam <msaydam@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:11:37 by msaydam           #+#    #+#             */
/*   Updated: 2022/06/22 15:18:17 by msaydam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)(c))
			return ((void *)(s + i));
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	const char	*s = "mustafa";
	int c = 's';
	size_t	n = 3;
	printf("%s", ft_memchr(s, c, n));
}
*/