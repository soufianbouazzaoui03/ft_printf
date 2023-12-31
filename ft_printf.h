/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-bou <soel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 19:44:31 by soel-bou          #+#    #+#             */
/*   Updated: 2023/11/23 00:40:03 by soel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *s, ...);
void	ft_format(char type, va_list *ap, size_t *len, int *i);
void	ft_putchar(char c, size_t *len);
void	ft_putstr(char *str, size_t *len);
void	ft_putnbr(long n, size_t *len);
void	ft_puthex(char *form, size_t n, size_t *len);
void	ft_putptr(size_t ptr, size_t *len);

#endif