/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-bou <soel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 19:43:11 by soel-bou          #+#    #+#             */
/*   Updated: 2023/11/23 00:11:30 by soel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(char *template, ...)
{
	va_list	ap;
	size_t	len;
	int		i;

	len = 0;
	i = 0;
	if (write(1, 0, 0) == -1)
		return (-1);
	va_start(ap, template);
	while (template[i])
	{
		if (template[i] == '%')
		{
			i++;
			ft_format(template[i], &ap, &len, &i);
		}
		else
			ft_putchar(template[i], &len);
		i++;
	}
	va_end(ap);
	return (len);
}
