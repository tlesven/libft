/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlesven <tlesven@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 12:31:21 by tlesven           #+#    #+#             */
/*   Updated: 2015/05/13 13:51:03 by tlesven          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		i;

	str = (char *)ft_memalloc(sizeof(s) * ft_strlen(s));
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = (*f)(s[i]);
		i++;
	}
	return (str);
}
