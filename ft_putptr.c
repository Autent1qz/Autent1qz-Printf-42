/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharfao <jcharfao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 12:37:21 by jcharfao          #+#    #+#             */
/*   Updated: 2024/03/24 13:45:38 by jcharfao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr(void *ptr, size_t *posi)
{
	char			*str;
	unsigned long	ptr_adress;

	ptr_adress = (unsigned long)ptr;
	ft_putstr("0x", posi);
	str = ft_aux_pf(ptr_adress, HEX_LOW_BASE);
	ft_putstr(str, posi);
	free(str);
}
