/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 08:59:36 by mbertin           #+#    #+#             */
/*   Updated: 2022/06/06 14:41:06 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"printf.h"
#include <stdlib.h>

void	ft_printf_arg(char *str, va_list params, int *len)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == 'd' || str[i] == 'i')
				ft_putnbr((int)va_arg(params, int), len);
			if (str[i] == 'c')
				ft_putchar((char)va_arg(params, int), len);
			if (str[i] == 's')
				ft_putstr((char *)va_arg(params, char *), len);
		}
		i++;
	}
}

int	ft_printf(const char *format, ...)
{
	int		*len;
	int		i;
	va_list	params;

	len = malloc(sizeof(int));
	if (!len)
		return (0);
	va_start(params, format);
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			ft_printf_arg((char *)format, params, len);
			i++;
		}
		else
			ft_putchar(format[i], len);
		i++;
	}
	return (*len);
}

int	main(int argc, char const *argv[])
{
	int		a;
	int		b;
	char	c;
	char	str[] = "coucou";

	a = 8468;
	b = 10;
	c = 'c';
	printf("FLAG D\n");
	ft_printf("J'ai %d caracteres\n", ft_printf("MIEN: %d\n", a));
	printf("J'ai %d caracteres\n", printf("REEL: %d\n", a));
	printf("\nFLAG I\n");
	ft_printf("J'ai %d caracteres\n", ft_printf("MIEN: %i\n", b));
	printf("J'ai %d caracteres\n", printf("REEL: %i\n", b));
	printf("\nFLAG C\n");
	ft_printf("J'ai %d caracteres\n", ft_printf("MIEN: %c\n", c));
	printf("J'ai %d caracteres\n", printf("REEL: %c\n", c));
	printf("\nFLAG S\n");
	ft_printf("J'ai %d caracteres\n", ft_printf("MIEN: %s\n", str));
	printf("J'ai %d caracteres\n", printf("REEL: %s\n", str));
	return (0);
}