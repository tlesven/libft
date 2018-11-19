/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlesven <tlesven@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 15:34:40 by tlesven           #+#    #+#             */
/*   Updated: 2018/11/19 15:48:54 by tlesven          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char			*scopy;
	unsigned int	i;

	scopy = (char*)ft_memalloc(sizeof(*scopy) * (ft_strlen(s) + 1));
	if (!scopy)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		scopy[i] = s[i];
		i++;
	}
	scopy[i] = '\0';
	return (scopy);
}
