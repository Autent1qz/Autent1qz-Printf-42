/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_auxfuns.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharfao <jcharfao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 11:33:50 by jcharfao          #+#    #+#             */
/*   Updated: 2024/03/24 13:33:41 by jcharfao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen_pf(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

size_t	ft_numlen(unsigned long long u, char *base)
{
	size_t	len;
	size_t	baslen;

	len = 1;
	baslen = ft_strlen_pf(base);
	while (u >= baslen)
	{
		u /= baslen;
		len++;
	}
	return (len);
}

void	ft_bzero_pf(void *s, size_t i)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (i > 0)
	{
		*p = 0;
		p++;
		i--;
	}
}

void	*ft_calloc_pf(size_t number, size_t size)
{
	void	*dest;

	dest = malloc (number * size);
	if (dest == NULL)
		return (NULL);
	ft_bzero_pf(dest, number * size);
	return (dest);
}

char	*ft_aux_pf(unsigned long long n, char *base)
{
	char	*str;
	int		num_len;
	int		base_len;

	num_len = ft_numlen(n, base);
	base_len = ft_strlen_pf(base);
	str = ft_calloc_pf((num_len + 1), sizeof(char));
	if (!str)
		return (NULL);
	while (num_len)
	{
		num_len = num_len - 1;
		str[num_len] = base[n % base_len];
		n /= base_len;
	}
	return (str);
}
