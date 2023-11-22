/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-bou <soel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 20:12:34 by soel-bou          #+#    #+#             */
/*   Updated: 2023/11/23 00:24:02 by soel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_format(char type, va_list *ap, size_t *len, int *i)
{
	if (type == 'c')
		ft_putchar(va_arg(*ap, int), len);
	else if (type == 's')
		ft_putstr(va_arg(*ap, char *), len);
	else if (type == 'd' || type == 'i')
		ft_putnbr(va_arg(*ap, int), len);
	else if (type == 'u')
		ft_putnbr(va_arg(*ap, unsigned int), len);
	else if (type == 'X')
		ft_puthex("0123456789ABCDEF", va_arg(*ap, unsigned int), len);
	else if (type == 'x')
		ft_puthex("0123456789abcdef", va_arg(*ap, unsigned int), len);
	else if (type == 'p')
		ft_putptr((size_t)va_arg(*ap, size_t), len);
	else if (type == '%')
		ft_putchar('%', len);
	else
		(*i)--;
}
