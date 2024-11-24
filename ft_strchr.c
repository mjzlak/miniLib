/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloeffer <mloeffer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:17:53 by mjzlak            #+#    #+#             */
/*   Updated: 2024/11/24 18:54:24 by mloeffer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "miniLib.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*str;
	char	ch;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)s;
	ch = (char)c;
	if (ch == '\0')
		return (&str[ft_strlen(s)]);
	while (str[i])
	{
		if (str[i] == ch)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
