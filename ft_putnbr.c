/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharfao <jcharfao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 22:03:29 by jcharfao          #+#    #+#             */
/*   Updated: 2024/03/17 00:59:21 by jcharfao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, size_t *posi)
{
	long	li;

	li = n;
	if (li < 0)
	{
		ft_putchar('-', posi);
		li = li * -1;
	}
	if (li >= 10)
	{
		ft_putnbr(li / 10, posi);
		ft_putnbr(li % 10, posi);
	}
	else
	{
		ft_putchar(li + '0', posi);
	}
}
