/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:58:48 by aperis-p          #+#    #+#             */
/*   Updated: 2023/06/25 20:41:20 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_itoa(unsigned long n, int base)
{
	int		count;
	char	*hexa_chrs;

	count = 0;
	hexa_chrs = "0123456789abcdef";
	if (n < (unsigned long)base)
		return ft_putchar(hexa_chrs[n]);
	else
	{
		count = ft_itoa(n / base, base);
		return count + ft_itoa(n % base, base);
	}
}

int hash_printer (unsigned long n, int base)
{
	if (base == 16)
		ft_putstr("0x");
	else if (base == 8)
		ft_putstr("0");
	return ft_itoa(n, base) + 2;
}

