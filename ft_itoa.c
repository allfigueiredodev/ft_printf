/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:58:48 by aperis-p          #+#    #+#             */
/*   Updated: 2023/06/25 21:31:14 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_itoa(unsigned long n, int base, int caps)
{
	int		count;
	char	*hexa_chrs;

	count = 0;
	if (caps)
		hexa_chrs = "0123456789ABCDEF";
	else
		hexa_chrs = "0123456789abcdef";
	if (n < (unsigned long)base)
		return ft_putchar(hexa_chrs[n]);
	else
	{
		count = ft_itoa(n / base, base, caps);
		return count + ft_itoa(n % base, base, caps);
	}
}

int hash_printer (unsigned long n, int base)
{
	if (base == 16)
		ft_putstr("0x");
	else if (base == 8)
		ft_putstr("0");
	return ft_itoa(n, base, 0) + 2;
}

