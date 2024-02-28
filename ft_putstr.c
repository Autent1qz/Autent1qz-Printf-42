/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharfao <jcharfao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 03:40:14 by jcharfao          #+#    #+#             */
/*   Updated: 2024/02/28 03:45:45 by jcharfao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_putstr(char *s)
{
    size_t  i;
    
    i = 0;
    if (s)
    {
        while (s[i])
        {
            write(1, &s[i], 1);
            i++;
        }
    }
}

int main()
{
    ft_putstr("estoy bien high");
}