/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharfao <jcharfao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 22:03:00 by jcharfao          #+#    #+#             */
/*   Updated: 2024/03/24 13:30:10 by jcharfao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putuint(unsigned int num, size_t *posi)
{
	char	*s;

	s = ft_aux_pf(num, "0123456789");
	ft_putstr(s, posi);
	free(s);
}
