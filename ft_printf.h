/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 23:25:29 by aperis-p          #+#    #+#             */
/*   Updated: 2023/06/27 17:29:06 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdarg.h>
# include <stdio.h>

int	ft_itoa(unsigned long n, int base, int caps);
int	ft_putstr(char *str);
int	ft_putchar(char c);
int	hash_printer(unsigned long n, int base);
int	ft_printf(const char *info, ...);

#endif