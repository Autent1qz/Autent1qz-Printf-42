/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharfao <jcharfao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 02:03:43 by jcharfao          #+#    #+#             */
/*   Updated: 2024/02/28 09:31:07 by jcharfao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

voidft_putchar(char c)
{
    write(1, &c, 1);
}
/* int main()
{
    ft_putchar('s');
} */