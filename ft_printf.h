/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharfao <jcharfao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 04:06:11 by jcharfao          #+#    #+#             */
/*   Updated: 2024/03/24 15:00:58 by jcharfao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

# define HEX_UPP_BASE "0123456789ABCDEF"
# define HEX_LOW_BASE "0123456789abcdef"

int		ft_printf(char const *s, ...);
void	ft_putchar(char c, size_t *posi);
void	ft_putnbr(int n, size_t *posi);
void	*ft_putstr(char *s, size_t *posi);
void	ft_putuint(unsigned int num, size_t *posi);
void	ft_puthex_pf(unsigned int num, size_t *counter, char *base);
char	*ft_aux_pf(unsigned long long n, char *base);
void	ft_putptr(void *ptr, size_t *posi);

#endif