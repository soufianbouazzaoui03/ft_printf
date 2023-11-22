/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-bou <soel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 19:43:11 by soel-bou          #+#    #+#             */
/*   Updated: 2023/11/22 23:21:20 by soel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_printf(char *template, ...)
{
    va_list ap;
    size_t  len;
    int     i;
    
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
        {
            ft_putchar(template[i], &len);
        }
        i++;
    }
    va_end(ap);
    return (len);
}
int main() {
    int num = 42;
    char str[] = "Hello, world!";
    char ch = 'A';
    void *ptr = (void *)&num;
    int negative = -123;
    unsigned int positive = 456;
    unsigned int hex_num = 255;

    // Test various cases
    printf("Testing %d, %s, %c, %p, %i, %u, %x, %X\n", num, str, ch, ptr, negative, positive, hex_num, hex_num);

    // Test more cases
    printf("Testing negative numbers: %d, %i, %x, %X\n", negative, negative, negative, negative);
    printf("Testing positive numbers: %u, %x, %X\n", positive, positive, positive);
    printf("Testing pointers: %p, %p\n", ptr, &ch);

    return 0;
}