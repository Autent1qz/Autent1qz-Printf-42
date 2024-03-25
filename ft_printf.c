/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharfao <jcharfao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 04:05:09 by jcharfao          #+#    #+#             */
/*   Updated: 2024/03/25 07:28:58 by jcharfao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

void	ft_tipo(va_list varg, char *s, size_t *posi)
{
	if (*s == 'c')
		ft_putchar(va_arg(varg, int), posi);
	else if (*s == 's')
		ft_putstr(va_arg(varg, char *), posi);
	else if (*s == 'd' || *s == 'i')
		ft_putnbr(va_arg(varg, int), posi);
	else if (*s == 'x' || *s == 'X')
	{
		if (*s == 'x')
			ft_puthex_pf(va_arg(varg, unsigned int), posi, HEX_LOW_BASE);
		else if (*s == 'X')
			ft_puthex_pf(va_arg(varg, unsigned int), posi, HEX_UPP_BASE);
	}
	else if (*s == 'u')
		ft_putuint(va_arg(varg, unsigned int), posi);
	else if (*s == 'p')
		ft_putptr(va_arg(varg, void *), posi);
	else if (*s == '%')
		ft_putchar(*s, posi);
}

int	ft_printf(char const *s, ...)
{
	va_list		varg;
	size_t		i;
	size_t		posi;

	posi = 0;
	i = 0;
	if (!s)
		return (0);
	va_start (varg, s);
	while (s[i])
	{
		if (*s == '%')
		{
			s++;
			ft_tipo(varg, (char *)s, &posi);
		}
		else
			ft_putchar(*s, &posi);
		s++;
	}
	va_end (varg);
	return (posi);
}
