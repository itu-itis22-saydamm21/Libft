/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaydam <msaydam@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 12:01:56 by msaydam           #+#    #+#             */
/*   Updated: 2022/06/24 12:04:18 by msaydam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}
/* 
void lower(unsigned int i, char *s)
{
	if (s[0] >= 65 && s[0] <= 90)
        s[0] = s[0] + 32;
}
int main()
{
    char str[] = "YAKUP";
    ft_striteri(str, lower);
    printf("%s", str);
}
 */
