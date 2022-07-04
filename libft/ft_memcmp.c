/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaydam <msaydam@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:18:36 by msaydam           #+#    #+#             */
/*   Updated: 2022/06/22 15:25:09 by msaydam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - (((unsigned char *)s2)[i]));
		i++;
	}
	return (0);
}
/*
int main(void)
{
    char *s1 = "ahmettt";
    char *s2 = "ahmett";
    size_t n = 7;
    printf("%d", ft_memcmp(s1, s2, n));
}
*/