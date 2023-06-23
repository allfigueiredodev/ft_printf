/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 23:14:34 by aperis-p          #+#    #+#             */
/*   Updated: 2023/06/22 18:25:32 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdarg.h>
# include <stdio.h>

int ft_putchar(char c)
{
	return(write(1, &c, 1));
}

int ft_putstr(char *str)
{
	int count;
	
	count = 0;
	while(*str)
	{
		count += ft_putchar(*str);
		str++;
	}
	return (count);
}

int ft_printf(const char *info, ...)
{
	va_list ap;
	int count;
	
	count = 0;
	va_start(ap, info);
	while (*info)
	{
		if(*info == '%')
		{
			if(*(info + 1) == 'c')
				count += ft_putchar(va_arg(ap, int));
			else if(*(info + 1) == 's')
				count += ft_putstr(va_arg(ap, char *));
		}
		info++;
	}
	va_end(ap);
	return (count);	
}

int main (void)
{
	// int count;

	// count = ft_printf("%c %d %d", 'a', 10, 15);
	ft_printf("%s", "qwertyu");
	// printf("%d signs", count);
	return(0);
}