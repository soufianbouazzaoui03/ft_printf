/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-bou <soel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 21:06:17 by soel-bou          #+#    #+#             */
/*   Updated: 2023/11/23 00:36:48 by soel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(long n, size_t *len)
{
	if (n < 0)
	{
		ft_putchar('-', len);
		n *= -1;
	}
	if (n >= 10)
		ft_putnbr(n / 10, len);
	ft_putchar(n % 10 + '0', len);
}
