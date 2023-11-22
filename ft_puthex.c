/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-bou <soel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 18:50:15 by soel-bou          #+#    #+#             */
/*   Updated: 2023/11/23 00:35:00 by soel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(char *form, size_t n, size_t *len)
{
	char	str[16];
	size_t	deg;
	int		i;

	i = 0;
	if (n == 0) 
	{
		ft_putchar(form[0], len);
		return ;
	}
	while (n)
	{
		deg = n % 16;
		str[i] = form[deg];
		n /= 16;
		i++;
	}
	while (i--)
		ft_putchar(str[i], len);
}
