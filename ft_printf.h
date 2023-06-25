/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 23:25:29 by aperis-p          #+#    #+#             */
/*   Updated: 2023/06/25 19:58:06 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdarg.h>
# include <stdio.h>

int	ft_itoa(unsigned long n, int base);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *s);
int ft_putstr(char *str);
int ft_putchar(char c);
int hash_printer (unsigned long n, int base);
// static char	*ft_hard_return(int n);
// static int	n_counter(int n);
// static int	ft_is_negative(int n);

#endif