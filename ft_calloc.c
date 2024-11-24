/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloeffer <mloeffer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 22:50:50 by mjzlak            #+#    #+#             */
/*   Updated: 2024/11/24 18:30:25 by mloeffer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "miniLib.h"

void	*ft_calloc(size_t nbelem, size_t size)
{
	void	*res;

	res = malloc(size * nbelem);
	if (!res)
		return (NULL);
	ft_bzero(res, size * nbelem);
	return (res);
}
