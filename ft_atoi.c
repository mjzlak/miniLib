/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloeffer <mloeffer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:10:31 by mloeffer          #+#    #+#             */
/*   Updated: 2024/11/24 18:30:09 by mloeffer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "miniLib.h"

static int	ft_char_is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

static int	ft_skippable(char c)
{
	if (c == ' ')
		return (1);
	if (c >= 9 && c <= 13)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		nb;
	int		sign;
	int		buf;

	if (!str)
		return (0);
	i = 0;
	nb = 0;
	sign = 1;
	while (ft_skippable(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign *= -1;
	while (str[i] && ft_char_is_num(str[i]))
	{
		buf = nb;
		if (nb < buf)
			return (-1);
		nb = nb * 10 + str[i++] - 48;
	}
	return (nb * sign);
}