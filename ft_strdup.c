/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloeffer <mloeffer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 22:59:42 by mjzlak            #+#    #+#             */
/*   Updated: 2024/11/24 18:54:34 by mloeffer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "miniLib.h"

char	*ft_strdup(const char *str)
{
	char	*res;
	size_t	len;

	if (!str)
		return (NULL);
	len = ft_strlen(str);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	len = 0;
	while (str[len])
	{
		res[len] = str[len];
		len++;
	}
	res[len] = '\0';
	return (res);
}
