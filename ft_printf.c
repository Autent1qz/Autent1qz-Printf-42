/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharfao <jcharfao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:14:20 by jcharfao          #+#    #+#             */
/*   Updated: 2024/03/08 07:35:40 by jcharfao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(char const *s, ...)
{
    va_list varg;
    size_t  i;
    size_t  *posicion;

    i = 0;
    counter = 0;
    va_start(varg, s);
    va_arg(varg, )
    if (!s)
        return (NULL);
    while (s[i])
    {
        if (s[i] == '%')
        {
            ft_tipo(varg, char*(s), &counter)
            i++;
        }
        ft_putchar(s[i], &counter)
        i++;
    }
    va_end(va);
    return (counter);
}
void    ft_tipo(va_list va,char const *s, size_t *counter)
{
    if (*s == 'c')
        ft_putchar();
    else if (*s == 's')
        ft_putstr();
    else if (*s == 'p')
        ft_putptr();    
    else if (*s == 'i' || *s == 'd')
        ft_putnbr();
    else if (*s == 'u')
        ft_putuint();
    else if (*s == 'x' || *s == 'X')
    
    else if (*s == '&')
    
    

}