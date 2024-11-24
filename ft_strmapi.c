/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloeffer <mloeffer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:06:52 by mjzlak            #+#    #+#             */
/*   Updated: 2024/11/24 18:55:39 by mloeffer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "miniLib.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	ssize_t	i;
	char	*res;

	if (!s || !f)
		return (NULL);
	i = 0;
	res = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!res)
		return (NULL);
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
