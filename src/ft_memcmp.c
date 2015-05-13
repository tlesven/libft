/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlesven <tlesven@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 17:27:06 by tlesven           #+#    #+#             */
/*   Updated: 2015/03/31 13:24:21 by tlesven          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	const char		*sub1;
	const char		*sub2;

	sub1 = s1;
	sub2 = s2;
	i = 0;
	while (i < n)
	{
		if (sub2[i] == '\0' && sub1[i] == '\200')
			return (sub2[i] - sub1[i]);
		if (sub1[i] != sub2[i])
			return (sub1[i] - sub2[i]);
		i++;
	}
	return (0);
}
