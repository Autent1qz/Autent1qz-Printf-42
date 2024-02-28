/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharfao <jcharfao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 01:58:13 by jcharfao          #+#    #+#             */
/*   Updated: 2024/02/28 03:40:07 by jcharfao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

void	ft_putnbr(int n)
{
	long	li;

	li = n;
	if (li < 0)
	{
		ft_putchar('-');
		li = li * -1;
	}
	if (li >= 10)
	{
		ft_putnbr(li / 10);
		ft_putnbr(li % 10);
	}
	else
	{
		ft_putchar(li + '0');
	}
}

/* int main()
{
    ft_putnbr(-2345);
} */