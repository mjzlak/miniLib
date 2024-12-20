/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloeffer <mloeffer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:44:42 by mloeffer          #+#    #+#             */
/*   Updated: 2024/11/24 18:30:17 by mloeffer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "miniLib.h"

void	ft_bzero(void *s, size_t n)
{
	if (n > 0)
		ft_memset(s, 0, n);
	else
		return ;
}
