/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-bou <soel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 23:43:47 by soel-bou          #+#    #+#             */
/*   Updated: 2023/11/23 00:24:54 by soel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putstr(char *str, size_t *len)
{
	int		i;
	char	*n;

	i = 0;
	n = "(null)";
	if (!str)
	{
		write(1, n, 6);
		*len += 6;
		return ;
	}
	while (str[i])
		ft_putchar(str[i++], len);
}
