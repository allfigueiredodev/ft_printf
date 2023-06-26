/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 23:14:34 by aperis-p          #+#    #+#             */
/*   Updated: 2023/06/25 21:40:54 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdint.h>
# include <string.h>

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
			else if(*(info + 1) == 'p')
				count += hash_printer(va_arg(ap, unsigned long), 16); // unsigned long max (0xffffffffffffffff)
			// else if(*(info + 1) == 'd')				
			// 	count += ft_itoa(va_arg(ap, int), 10);
			else if (*(info + 1) == 'x')
				count += ft_itoa(va_arg(ap, unsigned int), 16, 0);
			else if (*(info + 1) == 'X')
				count += ft_itoa(va_arg(ap, unsigned int), 16, 1);
			info++;
		}
		else
			count += write(1, info, 1);
		info++;
	}
	write(1, "\n", 1);
	va_end(ap);
	return (count);
}

int main (void)
{
	unsigned int count = 54698987;

	// count = ft_printf("%c %d %d", 'a', 10, 15);
	// printf("%d", ft_printf("teste %s testxxx %c qwerty", "qwertyu", 'a'));
	// printf("%i\n", &count);
	// ft_printf("%i\n", &count);
	printf("Number returned from printf: %d\n", printf("%X\n", count));
	printf("Number returned from ft_printf: %d\n", ft_printf("%X\n", count));
	// printf("\n%d\n", printf("teste%% %s testxxx %c qwerty", "qwertyu", 'a'));
	// printf("%d signs", count);
	return(0);
}